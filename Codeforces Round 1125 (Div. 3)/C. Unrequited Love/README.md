# C. Unrequited Love

[Link to Codeforces](https://codeforces.com/contest/2275/problem/C)

## Problem

K1o0n reached the stage where, for complete happiness, he only lacked a musical instrument, and bought a synthesizer second-hand. The instrument has `n` keys, giving `a1,a2,…,an` units of audience love.

Playing one note at a time is boring, so K1o0n learned a single technique — a triad: three keys with one key between each pair, pressed simultaneously. A triad starting at $x (1≤x≤n−4)$ is the keys `x, x+2, and x+4`, which brings $a_x+a_{x+2}−a_{x+4}$ units of audience love.

The keys are old, and each can withstand exactly one press. Therefore, K1o0n wants to choose exactly two different triads that **do not** share any keys. In addition, he wants both triads to bring the **same** amount of audience love.

Count the number of ways to choose two such triads.

## Input

The first line contains an integer $t (1≤t≤10^4)$ — the number of testcases.

The first line of each testcase contains an integer $n (6≤n≤2⋅10^5)$ — the number of keys.

The second line of each testcase contains `n` integers $a_i (−10^4≤a_i≤10^4)$ — the units of audience love.

It is guaranteed that the sum of `n` over all testcases does not exceed $2⋅10^5$.

## Output

For each testcase, output one integer — the number of unordered pairs of disjoint triads with equal audience love values.

Note that the answer may not fit into a 32-bit type. Use a 64-bit type (`long long` in C++, `long` in Java).

## Thinking Process

At first, we need to calculate every positions `i` from `1` to `n-4` as $x_i+x_{i+2}−x_{i+4}$ and put it onto the vector `st`

Then, we copy and sort the array `st` as `sortedSt`

Then, we need to compare `sortedSt[i]` with `sortedSt[i-1]`, if it equals, then we add count by 1, else we need to add `ans` by `Combination C(count, 2)` $\frac{count⋅(count-1)}{2}$

At last, we need to subtract invalid pairs, by:
```text
if (i + 2 < limit && st[i] == st[i + 2]) ans--;
if (i + 4 < limit && st[i] == st[i + 4]) ans--;
```

## Complexity

* **Time:** $O(NlogN)$
* **Space:** $O(N)$