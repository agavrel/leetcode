impl Solution {
    pub fn single_number(nums: Vec<i32>) -> i32 {
        let mut res:i32 = 0;
        for n in nums.iter() {
            res ^= n
        }
        res
    }
}