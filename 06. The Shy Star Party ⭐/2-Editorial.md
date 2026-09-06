# Editorial: The Shy Star Party ⭐

## Problem Understanding

We are given an integer **N** and need to print a triangle pattern where row `i` contains exactly `i` stars, each separated by a space.

## Key Observation

This is a classic **nested loop pattern** problem:
- Outer loop runs from `1` to `N` (rows).
- Inner loop runs from `1` to current row number (stars per row).
- Stars are separated by a space, so we print `* ` or handle spacing carefully.

## Approach

1. Read integer `N`.
2. Loop `i` from `1` to `N` (outer loop for rows).
3. Loop `j` from `1` to `i` (inner loop for stars in each row).
   - Print `*` followed by a space.
4. Print a newline after each row.

## Complexity Analysis

| Type | Complexity |
|------|------------|
| Time Complexity | O(N²) — nested loops |
| Space Complexity | O(1) — no extra memory used |

## Edge Cases

| Input | Expected Output | Reason |
|-------|-----------------|--------|
| 1 | `*` | Only one row with one star |
| 50 | 50 rows | Maximum constraint |

## Conclusion

A straightforward pattern printing problem using nested loops. The outer loop controls the number of rows and the inner loop controls the number of stars in each row.