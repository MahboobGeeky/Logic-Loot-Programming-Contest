# Editorial: DNS Wale Bhaiya

## Problem Understanding

We are given `N` students, each with a certain number of pages to print. Every page takes **5 seconds** to print. We need to find the total time to print all pages for all students.

## Key Observation

- Total pages = sum of all `pages[i]`
- Total time = `Total pages * 5`

## Approach

1. Read integer `N`.
2. Read `N` integers into an array.
3. Compute the sum of all elements.
4. Multiply the sum by `5`.
5. Print the result.

## Complexity Analysis

| Type | Complexity |
|------|------------|
| Time Complexity | O(N) — single pass to compute sum |
| Space Complexity | O(N) — storing the pages array |

## Edge Cases

| Input | Expected Output | Reason |
|-------|-----------------|--------|
| N=1, pages=[1] | 5 | Minimum case, 1 page * 5 = 5 |
| N=1, pages=[1000] | 5000 | Max pages for one student |
| All pages = 1000, N = 10⁵ | 500000000 | Max possible output, use `long long` |

## Important Note on Overflow

Since N can be up to **10⁵** and each `pages[i]` up to **1000**, the maximum total pages = 10⁸, and total time = **5 × 10⁸**, which exceeds the range of a 32-bit integer (~2.1 × 10⁹ — barely fits but risky). It is safest to use **`long long`** to avoid any overflow issues.

## Conclusion

A simple summation problem. Sum all page counts and multiply by 5. The only thing to watch out for is using `long long` for the result.