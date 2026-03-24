# Campus WiFi Access

### Problem Link: [Click Here](https://www.hackerrank.com/contests/logic-loot/challenges/campus-wifi-access)

## Problem Statement

The campus provides WiFi to students, but access is granted only under certain conditions.

A student can access the campus WiFi if:
- The student has a valid student ID (`ID`)
- AND the student is inside the campus (`C`)
- AND the student is **not** banned from the network (`B`)

In Boolean logic:
```
Access = ID AND C AND NOT B
```

You are given the values of `ID`, `C`, and `B` for several students. Determine whether each student will get **Access** or **No Access**.

## Input Format

- The first line contains an integer `n` — the number of students.
- Each of the next `n` lines contains three integers: `ID C B`

Where:
- `1` represents True
- `0` represents False

## Constraints
```
1 ≤ n ≤ 10⁵
ID, C, B ∈ {0, 1}
```

## Output Format

For each student print: `Access` OR `No Access`

## Sample Input 0
```
1
1 1 0
```

## Sample Output 0
```
Access
```

## Sample Input 1
```
1
1 1 1
```

## Sample Output 1
```
No Access
```

## Sample Input 2
```
1
0 0 0
```

## Sample Output 2
```
No Access
```