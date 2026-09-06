# Editorial: Vikas Chawla Sir's Lab Treat

## Problem Understanding

Each student gets samosas based on the number of questions they solved. Some students also get extra samosas for their hostel friends. We need to compute the total samosas distributed across all students.

## Key Observation

For each student, apply the following rules:

| Questions Solved | Own Samosas | Friend Samosas |
|------------------|-------------|----------------|
| solved == 10     | 5           | 1 per friend   |
| 5 < solved < 10  | 3           | 1 per friend   |
| 3 ≤ solved ≤ 5   | 3           | 0              |
| solved < 3       | 1           | 0              |

Total samosas for a student = own samosas + (friends samosas if applicable).

## Approach

1. Read integer `n`.
2. Read arrays `solved[]` and `friends[]`.
3. For each student `i`, calculate their samosa count based on the rules above.
4. Add to the running total.
5. Print the total.

## Complexity Analysis

| Type | Complexity |
|------|------------|
| Time Complexity | O(N) — single pass through all students |
| Space Complexity | O(N) — storing solved and friends arrays |

## Edge Cases

| Case | Explanation |
|------|-------------|
| solved = 3 | Boundary — falls in rule 3 (3 samosas, no friends) |
| solved = 5 | Boundary — falls in rule 3 (3 samosas, no friends) |
| solved = 6 | Boundary — falls in rule 2 (3 samosas + friends) |
| solved = 0, friends = 10 | Only 1 samosa, friends don't count |
| All solved = 10 | Maximum samosas per student = 5 + friends |

## Dry Run — Sample Input 0
```
n = 5
solved  = [10, 7, 4, 2, 6]
friends = [2,  1, 3, 0, 2]
```

| Student | Solved | Friends | Own | Friend Samosas | Total |
|---------|--------|---------|-----|----------------|-------|
| 1       | 10     | 2       | 5   | 2              | 7     |
| 2       | 7      | 1       | 3   | 1              | 4     |
| 3       | 4      | 3       | 3   | 0              | 3     |
| 4       | 2      | 0       | 1   | 0              | 1     |
| 5       | 6      | 2       | 3   | 2              | 5     |

**Total = 7 + 4 + 3 + 1 + 5 = 20 ✅**

## Conclusion

A conditional simulation problem. Apply the rules carefully for each student and accumulate the total. Pay special attention to the boundary values (3, 5, 10).