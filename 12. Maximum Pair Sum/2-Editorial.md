# Editorial: Maximum Pair Sum

## Problem Understanding

We are given an array of `N` integers. We need to find the maximum sum of any two different elements (at different indices). The answer is simply the sum of the two largest elements in the array.

## Key Observation

- The maximum pair sum is always the sum of the **two largest elements**.
- Sort the array in descending order and add the first two elements.
- Or find the largest and second largest in a single pass.

## Approach

### Approach 1 — Sorting
1. Read `N` integers into an array.
2. Sort in descending order.
3. Print `arr[0] + arr[1]`.

### Approach 2 — Single Pass (Optimal)
1. Read `N` integers.
2. Track `first` (largest) and `second` (second largest).
3. Update both on each iteration.
4. Print `first + second`.

## Complexity Analysis

| Type | Sorting Approach | Single Pass |
|------|-----------------|-------------|
| Time Complexity | O(N log N) | O(N) |
| Space Complexity | O(N) | O(1) |

## Edge Cases

| Input | Expected Output | Reason |
|-------|-----------------|--------|
| N=2, [1, 2] | 3 | Only one pair possible |
| All negative | sum of two largest negatives | e.g. [-1, -2] → -3 |
| All same elements | 2 * that element | e.g. [5, 5, 5] → 10 |
| Mix of negative and positive | sum of two largest | Negatives won't be picked |

## Dry Run — Sample Input 2
```
arr = [-1, -2, -3, -4, -5, -6]
Two largest = -1 and -2
Answer = -1 + (-2) = -3 ✅
```

## Conclusion

The maximum pair sum is always the sum of the two largest elements. Sorting the array and picking the top two is the simplest approach.