# [Single Number](https://leetcode.com/problems/single-number/)

### Prototype

#### C++

```cpp
int singleNumber(vector<int>& nums)
```

#### Rust

```rs
pub fn single_number(nums: Vec<i32>) -> i32
```

### Problem

Given a *non-empty* array of integers ```nums```, every element appears **twice** except for one. Find that single one.

*Follow up:* Could you implement a solution with a linear runtime complexity and without using extra memory?

Example 1:
```
Input: nums = [2,2,1]
Output: 1
```

Example 2:
```
Input: nums = [4,1,2,1,2]
Output: 4
```

Example 3:
```
Input: nums = [1]
Output: 1
```

Constraints:
* ```1 <= nums.length <= 3 * 10⁴```
* ```-3 * 10⁴ <= nums[i] <= 3 * 10⁴```
* Each element in the array appears twice except for one element which appears only once.