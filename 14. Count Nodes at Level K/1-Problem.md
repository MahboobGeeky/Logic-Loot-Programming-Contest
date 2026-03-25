# Count Nodes at Level K in a Binary Tree

You are given a binary tree with N nodes. Each node contains an integer value.

Your task is to count how many nodes exist at a given level K in the binary tree.

The root node is at level 0.

## Input Format

N K  
v1 v2 v3 v4 ... vN  

- N → number of nodes in the binary tree  
- K → level number  
- vi → node values given in level order traversal  
- If a node is NULL, it is represented by -1  

## Constraints

- 1 ≤ N ≤ 100000  
- 0 ≤ K ≤ N  
- -10^9 ≤ node value ≤ 10^9  

## Output Format

Print the number of nodes present at level K.

## Explanation (Sample Input 0)

7 2  
1 2 3 4 5 6 7  

The node values are given in level order traversal, which constructs the following binary tree:

Levels in the tree:

- Level 0 → 1  
- Level 1 → 2, 3  
- Level 2 → 4, 5, 6, 7  

## Sample Input 0

7 2  
1 2 3 4 5 6 7  

## Sample Output 0

4  

## Sample Input 1

7 1  
1 2 3 4 -1 -1 7  

## Sample Output 1

2