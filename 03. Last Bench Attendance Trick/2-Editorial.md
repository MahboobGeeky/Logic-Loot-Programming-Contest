# Editorial: Last Bench Safety Check

## Problem Understanding

We are given a single integer **N** representing the number of students in a classroom. The task is to determine whether the teacher will check attendance based on a simple threshold condition.

## Key Observation

This is a straightforward **conditional check** problem:
- If `N > 40` → Teacher checks attendance → Print `"Attendance Checked"`
- If `N <= 40` → Student is safe → Print `"Safe Today"`

## Approach

1. Read the integer `N` from input.
2. Apply a simple `if-else` condition:
   - Check if `N > 40`
   - Print the appropriate message based on the result.

## Complexity Analysis

| Type | Complexity |
|------|------------|
| Time Complexity | O(1) — single comparison |
| Space Complexity | O(1) — no extra memory used |

## Edge Cases

| Input | Expected Output | Reason |
|-------|-----------------|--------|
| 1 | Safe Today | Minimum constraint, far below 40 |
| 40 | Safe Today | Exactly 40 is NOT greater than 40 |
| 41 | Attendance Checked | First value strictly greater than 40 |
| 200 | Attendance Checked | Maximum constraint |

## Conclusion

The problem reduces to a single `if-else` comparison. No loops, no data structures, and no complex logic are needed. It is a classic beginner-level problem testing basic conditional statements.