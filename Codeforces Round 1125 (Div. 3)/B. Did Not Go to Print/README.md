# B. In Search of Convience

[Link to Codeforces](https://codeforces.com/contest/2275/problem/B)

## Problem

Recently, K1o0n bought himself a new expensive printer, which is distinguished by its memory, that is, it may not print immediately. Yesterday, while he was away from his new purchase, his friends used the printer.

There are `n` documents numbered from `1` to `n`. Initially, the printer memory is empty. The friends sequentially performed `n` commands on the printer, where the `i-th` command can be one of:

- `'1'`  — scanning. Document `i` is sent to the device memory and is placed on top of everything already there.

- `'2'`  — printing from memory. If the memory is not empty, the device prints the topmost document in memory and removes it from there. Otherwise, the device prints document `i`.

- `'3'`  — quick print. The device prints document `i`.

Today, the friends came to K1o0n with a complaint — not all documents were printed. Help K1o0n find the indices of all documents that **were not** printed.

## Input

The first line contains an integer $t(1 ≤ t ≤ 10^4)$ — the number of testcases.

The first line of each testcase contains an integer $n(1 ≤ n≤ 2⋅10^5)$ — the number of documents.

The second line of each testcase contains a string `s`
 of length `n`, consisting of the characters `'1'`, `'2'` and `'3'` — the friends' commands.

 It is guaranteed that the sum of `n` over all testcases does not exceed $2⋅10^5$.

## Output

For each testcase, output two lines.

In the first line — the number `k` of documents that **were not** printed.

In the second line — their numbers in increasing order, separated by spaces. If `k=0`, the second line is empty.

## Thinking Process

We need to track `n` documents (indexed `1` to `n`) and determine which ones were **not printed**.

The printer memory behaves like a **Stack** (Last in, First out)

### Command analysis:

`s` = `1` (Scanning): we push `i` onto the stack

`s` = `2` (Printing from memory):
- If stack is **not empty**, the printer prints the top document from stack (pop from stack, mark the document as printed)
- If stack is **empty**, the printer directly prints document `i` (mark document `i` as printed)

`s` = `3` (Quick print): document `i` is printed directly (mark document `i` as printed)

### Strategy:
Use a boolen/vis array `printed` of size $n+1$ initialized to `0` (unprinted) to keep track of each document's status.

Maintain a stack `st` to store indices of scanned documents

Iterate `i` from 0 to `n-1` (corresponding to document `i+1`):
- If $s[i]=='1'$: `st.push_back(i+1)`
- If $s[i]=='2'$:
  - If `!st.empty`: Mark `printed[st.back] = 1`, and `st.pop_back()`.
  - Else, mark `printed[i+1] = 1`
- If $s[i]=='3'$: Mark `printed[i+1] = 1`

After processing all commands, collect all indices $j \in [1, n]$ where `printed[j] == 0`.

## Complexity

* **Time:** $O(N)$
* **Space:** $O(N)$