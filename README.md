# C - Binary trees

- [0. Write a function that creates a binary tree node](0-binary_tree_node.c)
```c
 binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

- [1. Write a function that inserts a node as the left-child of another node](1-binary_tree_insert_left.c)
```c
 binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```

- [2. Write a function that inserts a node as the right-child of another node](2-binary_tree_insert_right.c)
```c
 binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```

- [3. Write a function that deletes an entire binary tree](3-binary_tree_delete.c)
```c
 void binary_tree_delete(binary_tree_t *tree);
```

- [4. Write a function that checks if a node is a leaf](4-binary_tree_is_leaf.c)
```c
 int binary_tree_is_leaf(const binary_tree_t *node);
```

- [5. Write a function that checks if a given node is a root](5-binary_tree_is_root.c)
```c
 int binary_tree_is_root(const binary_tree_t *node);
```

- [6. Write a function that goes through a binary tree using pre-order traversal](6-binary_tree_preorder.c)
```c
 void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
```

- [7. Write a function that goes through a binary tree using in-order traversal](7-binary_tree_inorder.c)
```c
 void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
```

- [8. Write a function that goes through a binary tree using post-order traversal](8-binary_tree_postorder.c)
```c
 void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
```

- [9. Write a function that measures the height of a binary tree](9-binary_tree_height.c)
```c
 size_t binary_tree_height(const binary_tree_t *tree);
```

- [10. Write a function that measures the depth of a node in a binary tree](10-binary_tree_depth.c)
```c
 size_t binary_tree_depth(const binary_tree_t *tree);
```

- [11. Write a function that measures the size of a binary tree](11-binary_tree_size.c)
```c
 size_t binary_tree_size(const binary_tree_t *tree);
```

- [12. Write a function that counts the leaves in a binary tree](12-binary_tree_leaves.c)
```c
 size_t binary_tree_leaves(const binary_tree_t *tree);
```

- [13. Write a function that counts the nodes with at least 1 child in a binary tree](13-binary_tree_nodes.c)
```c
 size_t binary_tree_nodes(const binary_tree_t *tree);
```

- [14. Write a function that measures the balance factor of a binary tree](14-binary_tree_balance.c)
```c
 int binary_tree_balance(const binary_tree_t *tree);
```

- [15. Write a function that checks if a binary tree is full](15-binary_tree_is_full.c)
```c
 int binary_tree_is_full(const binary_tree_t *tree);
```

- [16. Write a function that checks if a binary tree is perfect](16-binary_tree_is_perfect.c)
```c
 int binary_tree_is_perfect(const binary_tree_t *tree);
```

- [17. Write a function that finds the sibling of a node](17-binary_tree_sibling.c)
```c
 binary_tree_t *binary_tree_sibling(binary_tree_t *node);
```

- [18. Write a function that finds the uncle of a node](18-binary_tree_uncle.c)
```c
 binary_tree_t *binary_tree_uncle(binary_tree_t *node);
```