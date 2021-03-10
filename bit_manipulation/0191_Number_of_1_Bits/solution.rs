impl Solution {
    pub fn hammingWeight (n: u32) -> i32 {
        return n.count_ones() as i32;
    }
}