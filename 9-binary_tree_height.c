#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
        int count = 0;
        if (!tree)
                return (0);
        
        if(tree->left)
                count += 1;
        if (tree->right)
                count += 1;

        return (count);
}