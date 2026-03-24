# Editorial: Bunny Jump Sequence

## Problem Understanding

This is a classic **Fibonacci sequence** problem. The bunny's jump distances follow the Fibonacci pattern:
```
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2)  for n ≥ 2
```

Given `n`, we need to print `F(n)`.

## Key Observation

- The sequence is 0-indexed: `F(0)=0, F(1)=1, F(2)=1, F(3)=2, F(4)=3 ...`
- We can solve this iteratively or recursively.
- Since `n ≤ 40`, both approaches are feasible, but **iterative is preferred** to avoid stack overflow and repeated calculations.

## Approach

### Approach 1 — Iterative (Recommended)
1. Handle base cases: if `n==0` print `0`, if `n==1` print `1`.
2. Use two variables `a=0` and `b=1`.
3. Loop from `2` to `n`, updating `a` and `b` each time.
4. Print `b`.

### Approach 2 — Recursive
1. Base cases: `fib(0)=0`, `fib(1)=1`.
2. Return `fib(n-1) + fib(n-2)`.
3. Note: For `n=40`, recursive approach makes ~2 billion calls — avoid without memoization.

## Complexity Analysis

| Approach | Time Complexity | Space Complexity |
|----------|----------------|-----------------|
| Iterative | O(N) | O(1) |
| Recursive (no memo) | O(2^N) | O(N) stack |
| Recursive (with memo) | O(N) | O(N) |

## Edge Cases

| Input | Expected Output | Reason |
|-------|-----------------|--------|
| 0 | 0 | Base case |
| 1 | 1 | Base case |
| 40 | 102334155 | Maximum constraint |

## Sequence Reference

| n | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7  | 8  |
|---|---|---|---|---|---|---|---|----|----|
| F(n) | 0 | 1 | 1 | 2 | 3 | 5 | 8 | 13 | 21 |

## Conclusion

A classic Fibonacci problem. Use the iterative approach for efficiency. Be careful about the 0-indexed base cases: `F(0)=0` and `F(1)=1`.