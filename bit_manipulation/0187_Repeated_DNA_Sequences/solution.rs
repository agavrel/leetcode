impl Solution {
    fn make_hash(hash: &mut i32, letter: i32) {
        let c:i32 = ((letter & 0x3f) >> 1) & 0b11;
        *hash &= 0b00111111111111111111;
        *hash = (*hash << 2 | c);
    }
    pub fn find_repeated_dna_sequences(s: String) -> Vec<String> {
         let mut res:Vec<String>  = Vec::new();

        if (s.chars().count() <= 10) {
            return res;
        }

        let mut hashTable:[i32;1 << 20] = [0; 1 << 20];
        let mut hash:i32 = 0;
        for i in 0..10 {
            Solution::make_hash(&mut hash, s.as_bytes()[i] as i32);
        }
        hashTable[hash as usize]+=1;

        for i in 10..s.chars().count() {
            Solution::make_hash(&mut hash, s.as_bytes()[i] as i32);
            if (hashTable[hash as usize] == 1) == true {
                res.push(s.chars().skip(i-9).take(10).collect());
            }
            hashTable[hash as usize] += 1;
        }

        return res;
    }
}