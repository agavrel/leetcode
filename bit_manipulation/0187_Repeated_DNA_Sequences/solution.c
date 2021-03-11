

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void makeHash(int *hash, int letter) {
       // A 1 C 3 G 7 T 20 after & 0x3f, after >> 1 (middle + left), after &0b11 (middle) :
       // 0b00 00  1
       // 0b00 01  1
       // 0b00 11  1
       // 0b10 10  0
        int c = ((letter & 0x3f) >> 1)  & 0b11;
        *hash &= 0b00111111111111111111; // avoid overflow
        *hash = (*hash << 2 | c); // add current letter information to value of the hash
    }

char ** findRepeatedDnaSequences(char * s, int* returnSize){
    int len = strlen(s);
    char **res = (char **)calloc(len>>2, sizeof(char *));
    *returnSize = 0;
    if (len <= 10)
        return res;
    int hashTable[1 << 20] = {};
    int hash = 0;
    #pragma GCC unroll 10
    #pragma clang loop unroll(10)
    for (int i = 0; i < 10; i++)
        makeHash(&hash, s[i]);
    hashTable[hash]++;
    *res = (char *)malloc(sizeof(char) * 11);
    for (int i = 10; i < len; i++) {
        makeHash(&hash, s[i]);
        if (!(hashTable[hash]++ ^ 1)) {
            //res[(*returnSize)++] = strndup(&s[i-9], 10);//equivalent to below
            res[*returnSize] = (char *)malloc(11 * sizeof(char));
            memcpy(res[*returnSize],&s[i-9], 10);
            res[(*returnSize)++][10] = '\0';
        }
    }
    return res;
}