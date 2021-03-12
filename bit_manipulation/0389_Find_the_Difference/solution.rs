impl Solution {
    pub fn find_the_difference(s1: String, t1: String) -> char {
        let mut c:u8 = 0;
        let mut s = s1.as_bytes();
        let mut t = t1.as_bytes();

        for i in 0..s.len() {
            c ^= s[i] ^ t[i];
        }
        (c ^ t[s.len()]) as char
    }
}
/*
impl Solution {
    pub fn find_the_difference(s1: String, t1: String) -> char {
        let mut c:u8 = 0;
        let s: Vec<char> = s1.chars().collect();
        let t: Vec<char> = t1.chars().collect();

        for i in 0..s1.chars().count() {
            c ^= t[i] as u8 ^ s[i] as u8;
        }
        return (c ^ t[s1.chars().count()] as u8) as char;

    }
}
*/