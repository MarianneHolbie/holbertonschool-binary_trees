#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
        int count = 0;

        if (!tree)
                return (0);
        if (!tree->left && !tree->right)
                return (1);

        if (tree->left)
                count += 1;
        if (tree->right)
                count += 1;
        return (count);
}               