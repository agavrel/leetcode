impl Solution {
    pub fn hamming_distance(x: i32, y: i32) -> i32 {
        return (x ^ y).count_ones() as i32;
    }
}