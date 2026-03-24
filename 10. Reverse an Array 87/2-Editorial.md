# Editorial: Reverse an Array

## Problem Understanding

We are given an array of `N` integers. We need to print the elements in reverse order — from the last element to the first.

## Key Observation

This is a classic **array traversal** problem:
- Either traverse the array from index `N-1` to `0`.
- Or use the built-in `reverse()` function and print normally.

## Approach

### Approach 1 — Reverse Traversal (No extra space)
1. Read `N` integers into an array.
2. Loop from index `N-1` down to `0`.
3. Print each element separated by a space.

### Approach 2 — Using STL reverse()
1. Read `N` integers into a vector.
2. Call `reverse(v.begin(), v.end())`.
3. Print the vector.

## Complexity Analysis

| Type | Complexity |
|------|------------|
| Time Complexity | O(N) — single pass to print |
| Space Complexity | O(N) — storing the array |

## Edge Cases

| Input | Expected Output | Reason |
|-------|-----------------|--------|
| N=1, [5] | 5 | Single element, same when reversed |
| All same elements | same array | Reversing identical elements changes nothing |
| Negative numbers | reversed order | Negatives handled the same way |

## Conclusion

A straightforward array reversal problem. Traverse from the last index to the first and print each element. Handle the spacing carefully — no trailing space after the last element.