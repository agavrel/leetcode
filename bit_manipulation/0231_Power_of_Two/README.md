# [Power of Two](https://leetcode.com/problems/power-of-two/)

### Prototype

#### C++

```cpp
bool isPowerOfTwo(int n)
```

#### Rust

```rs
pub fn is_power_of_two(n: i32) -> bool
```

### Problem

Given an integer ```n```, return **true** if it is a power of two. Otherwise, return **false**.
An integer ```n``` is a power of two, if there exists an integer ```x``` such that ```n == 2ˣ```.

Example 1:
```
Input: n = 1
Output: true
```

Example 2:
```
Input: n = 16
Output: true
```

Example 3:
```
Input: n = 3
Output: false
```

Example 4:
```
Input: n = 4
Output: true
```

Example 5:
```
Input: n = 5
Output: false
```

Constraints:
* ```-2³¹  <= n <= 2³¹ - 1```

*Follow up:* If this function is called many times, how would you optimize it?