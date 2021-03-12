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