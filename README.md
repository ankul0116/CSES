# CSES Problem Set Solutions

My C++ solutions to the [CSES Problem Set](https://cses.fi/problemset/), a collection of classic competitive programming problems used to practise core algorithms and data structures.

## Progress

| Section | Solved |
|---|---|
| Introductory Problems   | 13 |
| Sorting and Searching   | 15 |
| Dynamic Programming     | 10 |
| Sliding Window Problems | 1  |
| **Total** | **39** |

Ongoing. I add solutions as I solve them.

## Repository structure

```
introductory/            Introductory Problems
sorting_and_searching/   Sorting and Searching
dynamic_programming/     Dynamic Programming
sliding_window/          Sliding Window Problems
attempts/                Work in progress (not yet accepted)
```

Each file is named after its problem, in snake_case. For example, `coin_combinations_ii.cpp` solves *Coin Combinations II*.

Only accepted solutions are kept in the section folders. Unfinished or failing attempts stay in `attempts/` until they pass.

## Topics covered so far

- Greedy algorithms and sorting
- Two pointers
- Prefix sums and Kadane's algorithm
- Monotonic stack
- Dynamic programming: counting, knapsack-style, and grid DP
- Sliding window with hashing

## Running a solution

```bash
g++ -std=c++17 -O2 introductory/weird_algorithm.cpp -o solution
./solution < input.txt
```

## Profiles

- LeetCode: [ANKUL0116](https://leetcode.com/u/ANKUL0116/)