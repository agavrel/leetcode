# [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)

Given an array `nums` containing n distinct numbers in the range `[0, n]`, return the *only number in the range that is missing from the array*.

*Follow up:* Could you implement a solution using only `O(1)` extra space complexity and `O(n)` runtime complexity?

Example 1:
```
Input: nums = [1,3,4,2,2]
Output: 2
```

Example 2:
```
Input: nums = [3,1,3,4,2]
Output: 3
```


Example 3:
```
Input: nums = [1,1]
Output: 1
```

Example 4:
```
Input: nums = [1,1,2]
Output: 1
```


*Constraints:* 
* `2 <= n <= 3 * 10⁴`
* `nums.length == n + 1`
* `1 <= nums[i] <= n`
* All the integers in `nums` appear only *once* except for *precisely one integer* which appears *two or more* times.

*Follow up:*
* How can we prove that at least one duplicate number must exist in `nums`?
* Can you solve the problem *without* modifying the array `nums`?
* Can you solve the problem using only constant, `O(1)` extra space?
* Can you solve the problem with runtime complexity less than `O(n2)`?