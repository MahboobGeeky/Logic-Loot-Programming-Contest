# Editorial: Campus WiFi Access

## Problem Understanding

For each student, we are given three boolean values `ID`, `C`, and `B`. We need to check if the condition `ID AND C AND NOT B` is satisfied and print `Access` or `No Access` accordingly.

## Key Observation

The condition is a simple boolean expression:
- `ID == 1` — student has valid ID
- `C == 1` — student is inside campus
- `B == 0` — student is NOT banned

All three must be true simultaneously for access to be granted.

## Approach

1. Read integer `n`.
2. For each of the `n` students:
   - Read `ID`, `C`, `B`.
   - Check if `ID==1 && C==1 && B==0`.
   - Print `Access` if true, else `No Access`.

## Complexity Analysis

| Type | Complexity |
|------|------------|
| Time Complexity | O(N) — one check per student |
| Space Complexity | O(1) — no extra memory needed |

## Truth Table

| ID | C | B | Access? |
|----|---|---|---------|
| 1  | 1 | 0 | ✅ Access |
| 1  | 1 | 1 | ❌ No Access (banned) |
| 1  | 0 | 0 | ❌ No Access (not on campus) |
| 0  | 1 | 0 | ❌ No Access (no valid ID) |
| 0  | 0 | 0 | ❌ No Access |
| 0  | 0 | 1 | ❌ No Access |

## Conclusion

A straightforward boolean logic problem. Evaluate the condition `ID AND C AND NOT B` for each student and print the result. No complex data structures or algorithms needed.