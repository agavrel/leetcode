impl Solution {
    pub fn first_uniq_char(s: String) -> i32 {
        let mut v = vec![0; 26];

        for c in s.chars() {
            v[(c as usize) - 0x61] += 1;
        }
        for (i, c) in s.chars().enumerate() {
            if v[(c as usize) - 0x61] == 1 {
                return i as i32;
            }
        }
        -1
    }
}

/*
impl Solution {
    pub fn first_uniq_char(s1: String) -> i32 {
        let mut v:Vec<i32> = vec![-1; 26];
        let mut n:usize = 0;
        let s = s1.as_bytes();
        for i in 0..s.len() {
            n = s[i] as usize - 0x61;
            if v[n] == -1 {
                v[n] = i as i32;
            }
            else {
                v[n] = 0x7fffffff
            }
        }
        let mut res:i32 = 0x7fffffff;
        for i in 0..26 {
            if v[i] < res && v[i] >= 0 {
                res = v[i];
            }
        }
        if res != 0x7fffffff {
            return res;
        }
        -1
    }
}


use std::collections::HashMap;

impl Solution {
    pub fn first_uniq_char(s1: String) -> i32 {
        let mut s = s1.as_bytes();
        let mut m = HashMap::new();
        let mut min:i32 = 0x7fffffff;

        for i in 0..s.len() {
            if m.contains_key(&s[i]) == true {
                m.insert(u8::from(s[i]), 0x7fffffff as i32);
            }
            else {
                m.insert(u8::from(s[i]), i as i32);
            }
        }

        for (k, v) in m.into_iter() {
            if v < min {
                min = v;
            }
        }

        if min != 0x7fffffff {
            return min;
        }
        -1
    }
}
*/