impl Solution {
    pub fn total_hamming_distance(nums: Vec<i32>) -> i32 {
        let mut res:i32 = 0;
        let mut mask:i32 = 0b01000000000000000000000000000000;
        let mut setBits:i32;
        let len:i32 = nums.len() as i32;

        while mask != 0 {
            setBits = 0;
            for n in nums.iter() {
                setBits += (n & mask != 0) as i32;
            }
            res += setBits * (len - setBits);
            mask >>= 1;
        }
        return res;
    }
}
