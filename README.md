# Leetcode

### About Leetcode

**Leetcode** is a very nice platform to practice algorithms. unlike most of its peers, it provides insights about the runtime and memory used by the algorithm.

Leetcode has one weekly contest and one biweekly contest.

### About this repository

**Solutions are provided in c++** and easily convertible into other languages. I try to explain them the best that I can.

Algorithms are divided in the following categories, with between brackets the usual difficulty:
* Vector (easy to medium)
* String (easy to medium)
* [Dynamic Programming](https://en.wikipedia.org/wiki/dynamic_programming) (medium to hard)
* Subarray (medium to hard)
* Bit Manipulation (easy to hard)
```cpp
void makeHash(int &hash, int letter) {
   // A 1 C 3 G 7 T 20 after & 0x3f, after >> 1 (middle + left), after &0b11 (middle) :
   // 0b00 00  1
   // 0b00 01  1
   // 0b00 11  1
   // 0b10 10  0
    int c = ((letter & 0x3f) >> 1)  & 0b11;
    hash &= 0b00111111111111111111; // avoid overflow
    hash = (hash << 2 | c); // add current letter information to value of the hash
}
```

### What can you expect

I always try to coin the most **elegant** algorithms, with a runtime that will most of the time **be faster than best solutions**, while not giving up on memory usage.

![fast C++](fast.png?raw=true)

Recently I have switched to Rust and enjoyed it as it constantly beats C++ when it comes to runtime and memory (same algorithm as above:)

![fast Rust](fastRust.png?raw=true)

### Anri ~ Timely

<a href="https://www.youtube.com/watch?v=fp2psphgAK4
" target="_blank"><img src="http://img.youtube.com/vi/fp2psphgAK4/0.jpg"
alt="Anri Timely on Youtube" width="240" height="180" border="10" /></a>


### Little leetcode hack
```cpp
static int lambda_0 = []() { std::ios::sync_with_stdio(false); cin.tie(NULL); return 0; }();
```

NB: (for myself) to write an ```n``` superscript digit (power of) use following unicode:
```
ctrl+shift+u and then if n = 3 'b3', if n = 2 'b2', if n = 1 'b9'
ctrl+shift+u and then '2' '0' '7' and ending with n for other digits
```


### Any remark ?

*Feel free to make a pull request*

**Wished PR: Equivalent solutions in Rust and Golang!**