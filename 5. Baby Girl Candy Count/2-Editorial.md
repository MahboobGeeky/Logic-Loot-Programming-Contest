# Editorial: Baby Girl Candy Count

## Problem Understanding

We are given `n` candy colors as strings. We need to count how many of them are exactly `"pink"`.

## Key Observation

This is a simple **string matching + counting** problem:
- Iterate over all candy colors.
- Increment a counter whenever the color equals `"pink"`.

## Approach

1. Read integer `n`.
2. Read `n` strings into an array.
3. Initialize a counter `count = 0`.
4. Loop through each string:
   - If it equals `"pink"`, increment `count`.
5. Print `count`.

## Complexity Analysis

| Type | Complexity |
|------|------------|
| Time Complexity | O(n) — single pass through all candies |
| Space Complexity | O(n) — storing the candy colors |

## Edge Cases

| Input | Expected Output | Reason |
|-------|-----------------|--------|
| All pink | n | Every candy counts |
| No pink | 0 | No matching color |
| Mixed | k | Only pink ones counted |
| n = 1, "pink" | 1 | Minimum input, is pink |
| n = 1, "blue" | 0 | Minimum input, not pink |

## Conclusion

A straightforward counting problem. Just iterate through the list and count occurrences of the string `"pink"`. No sorting or complex logic needed.