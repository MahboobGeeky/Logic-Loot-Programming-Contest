# Editorial: Count Nodes at Level K

## 🧠 Intuition

The problem gives a binary tree in **level order format**.  
We need to count how many nodes are present at a specific level `K`.

Since the tree is already given in **level order**, the best approach is:

👉 Use **Breadth First Search (BFS)**

---

## 🚀 Approach (Using Queue)

1. Insert the root node into a queue.
2. Maintain a variable `level = 0`.
3. Traverse level by level using BFS:
   - For each level:
     - Count number of nodes in queue (`size`)
     - If `level == K`, return `size`
     - Otherwise, process next level
4. While processing:
   - Ignore nodes with value `-1` (NULL nodes)
   - Only push valid children

---

## ⚙️ Steps

- Build tree implicitly while traversing array
- Use queue to simulate level order traversal
- Stop early when level `K` is reached

---

## ⏱️ Complexity

- **Time Complexity:** O(N)
- **Space Complexity:** O(N)

---

## 💡 Key Observations

- Level order traversal naturally fits BFS
- Each level is processed separately
- No need to explicitly build full tree

---

## 🔥 Edge Cases

- If root is `-1` → answer is 0
- If `K` is larger than tree height → answer is 0