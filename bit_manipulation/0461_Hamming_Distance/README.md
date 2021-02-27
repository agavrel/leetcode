# [Hamming Distance](https://leetcode.com/problems/hamming-distance/)

### Prototype

```cpp
int hammingDistance(int x, int y)
```

### Problem

The [Hamming distance](https://en.wikipedia.org/wiki/Hamming_distance) between two integers is the number of positions at which the corresponding bits are different.

Given two integers `x` and `y`, calculate the Hamming distance.

*Note:*
`0 ≤ x, y < 2³¹.`

*Example:*
```
Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

The above arrows point to positions where the corresponding bits are different.
```