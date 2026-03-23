# Editorial: Campus Chai Wala

## Problem Understanding

We are given `n` integers representing the number of chai cups bought by each student. We need to find the maximum value among all of them.

## Key Observation

This is a classic **linear search for maximum** problem:
- Initialize a variable `maxCups` with the first element.
- Traverse the array and update `maxCups` whenever a larger value is found.
- Print `maxCups` at the end.

## Approach

1. Read integer `n`.
2. Read `n` integers one by one.
3. Track the maximum value seen so far.
4. Print the maximum.

## Complexity Analysis

| Type | Complexity |
|------|------------|
| Time Complexity | O(N) — single pass through the array |
| Space Complexity | O(1) — only one variable to track max |

## Edge Cases

| Input | Expected Output | Reason |
|-------|-----------------|--------|
| n=1, cups=[1] | 1 | Only one student |
| All equal values | that value | Max of equal elements is the same value |
| Strictly increasing | last element | Maximum is at the end |
| Strictly decreasing | first element | Maximum is at the start |

## Conclusion

A straightforward maximum finding problem. A single pass through the input is sufficient. No sorting or extra data structures needed.