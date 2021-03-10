impl Solution {
    pub fn is_power_of_two(n: i32) -> bool {
        return n > 0 && n.count_ones() == 1;
    }
}