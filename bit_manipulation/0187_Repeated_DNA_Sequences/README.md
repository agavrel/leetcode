# [Repeated DNA Sequences](https://leetcode.com/problems/repeated-dna-sequences/)

### Prototype

#### C++

```cpp
vector<string> findRepeatedDnaSequences(string s)
```

#### Rust

```rs
pub fn find_repeated_dna_sequences(s: String) -> Vec<String>
```

### Problem

All DNA is composed of a series of nucleotides abbreviated as `'A'`, `'C'`, `'G'`, and `'T'`, for example: `"ACGAATTCCG"`. When studying DNA, it is sometimes useful to identify repeated sequences within the DNA.

Write a function to find all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.

Example 1:
```
Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
Output: ["AAAAACCCCC","CCCCCAAAAA"]
```

Example 2:
```
Input: s = "AAAAAAAAAAAAA"
Output: ["AAAAAAAAAA"]
```

*Constraints:*
* `0 <= s.length <= 10⁵`
* `s[i] is 'A', 'C', 'G', or 'T'.`