# C - Binary Trees

## 📝 Description
This repository contains my implementation of various **Binary Tree** data structures and algorithms as part of the **ALX Software Engineering** curriculum. The project focuses on the internal structure of trees, traversal methods, and the differences between various specialized tree types like BST, AVL, and Heaps.

All code is written in **C**, follows the **Betty** style guide, and is designed for efficient memory management.

## 🛠️ Technical Stack
* **Language:** C
* **Style:** [Betty Linter](https://github.com/alx-tools/Betty)
* **Compiler:** `gcc` (Flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **OS:** Ubuntu 20.04 LTS

---

## 📂 Project Structure

| Task/File | Topic | Description |
| :--- | :--- | :--- |
| `0-binary_tree_node.c` | Basics | Creating a binary tree node. |
| `1-binary_tree_insert_left.c` | Insertion | Inserting a node as the left-child. |
| `2-binary_tree_insert_right.c` | Insertion | Inserting a node as the right-child. |
| `6-9-traversals` | Traversals | Pre-order, In-order, and Post-order traversal logic. |
| `10-13-measures` | Metrics | Calculating height, depth, size, and leaf count. |
| `14-18-properties` | Logic | Checking if a tree is full, perfect, or balanced. |
| `100-binary_trees_ancestor.c` | Advanced | Finding the lowest common ancestor of two nodes. |
| `110-binary_tree_is_bst.c` | BST | Validating if a tree is a Binary Search Tree. |
| `120-binary_tree_is_avl.c` | AVL Trees | Validating if a tree is an Adelson-Velsky and Landis tree. |

---

## 🏗️ Data Structures
The project uses the following basic structures:

### Binary Tree
```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
```

### Specialized Types
* **BST:** `typedef struct binary_tree_s bst_t;`
* **AVL Tree:** `typedef struct binary_tree_s avl_t;`
* **Max Binary Heap:** `typedef struct binary_tree_s heap_t;`

---

## 🚀 Key Concepts Learned
* **Recursive Thinking:** Almost every tree operation (height, size, traversal) relies on recursive logic.
* **Complexity (Big O):** Understanding the difference between $O(log(n))$ and $O(n)$ in search/insertion.
* **Self-Balancing Trees:** The importance of AVL trees in preventing tree skewing.
* **Memory Safety:** Ensuring every node allocated with `malloc` is properly `free`'d during tree deletion.

## ✒️ Author
* **Ismael Bill** - [GitHub](https://github.com/Ismaelbill)
