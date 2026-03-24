# Vikas Chawla Sir's Lab Treat

### Problem Link: [Click Here](https://www.hackerrank.com/contests/logic-loot/challenges/vikas-chawla-sir-lab-treat)

## Problem Statement

Vikas Chawla Sir is conducting the EGD Lab at 2 PM and gives the students an assignment of 10 questions. After 2 hours, Sir announces a surprise Samosa Party 🎉.

Sir decides to distribute samosas according to the following rules:

1. Students who solved **all 10 questions** (Top Performers) receive **5 samosas** for themselves and can take **1 samosa per hostel friend**.
2. Students who solved **more than 5 but less than 10 questions** receive **3 samosas** and can take **1 samosa per friend**.
3. Students who solved **3–5 questions** receive **3 samosas** only for themselves.
4. Students who solved **fewer than 3 questions** receive **1 samosa**.

Your task is to determine the total number of samosas distributed among all students, including the samosas taken for friends.

## Input Format

- The first line contains an integer `n` — the number of students.
- The second line contains `n` space-separated integers, where `solved[i]` represents the number of questions solved by the i-th student.
- The third line contains `n` space-separated integers, where `friends[i]` represents the number of friends in the hostel for whom the i-th student wants to bring samosas (`0` if none).

## Constraints
```
1 ≤ n ≤ 1000
0 ≤ solved[i] ≤ 10
0 ≤ friends[i] ≤ 10
```

## Output Format

Print a single integer — the total number of samosas distributed.

## Sample Input 0
```
5
10 7 4 2 6
2 1 3 0 2
```

## Sample Output 0
```
20
```

## Sample Input 1
```
4
0 1 2 3
5 4 3 2
```

## Sample Output 1
```
6
```

## Sample Input 2
```
6
10 10 10 10 10 10
1 2 3 4 5 6
```

## Sample Output 2
```
51
```