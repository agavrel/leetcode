impl Solution {
    pub fn integer_replacement(mut n:i32) -> i32 {
        if n == 0x7fffffff {
            return 32;
        }
        let mut res:i32 = 0;
        while n > 1 {
            if (n.trailing_zeros() == 31 - n.leading_zeros()) {// special case #1, if power of two
                return res + n.trailing_zeros() as i32; // we add the number of trailing 0
            }
            if n == 0b11 {// special case #2, n == 3 (0b11)
                return res + 2; // only case where it is faster to substract and divide (+2) than to add and divide twice (+3).
            }
            if (n & 1 == 1) { // if n is odd
                n += (n & 0b10) - 1; // if n & 0b10 we add 1, else we remove 1
            }
            else {
                n >>= 1; // if n is even we divide by 2
            }
            res+=1;
        }
        res
    }
}