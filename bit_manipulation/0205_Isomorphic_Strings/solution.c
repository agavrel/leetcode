bool isIsomorphic(char * s, char * t){
    bool isNotIso = false;
    char iso[0xdf] = {};
    char ito[0xdf] = {};
    int n = strlen(s);

    while (n--) {
        int c = *s++ - 0x20;
        int d = *t++ - 0x20;
        isNotIso |= (iso[d] * (iso[d] ^ c));
        isNotIso |= (ito[c] * (ito[c] ^ d));
        iso[d] = c;
        ito[c] = d;
    }

    return !isNotIso;
}