#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
        binary_tree_t *king_parent;
        binary_tree_t *king_parent_last;
        int upking = 0;

        if (!node)
                return (NULL);
        
        king_parent = node->parent;
        king_parent_last = node;
        while (king_parent)
        {
                upking += 1;
                king_parent = node->parent;
                king_parent_last = node;
        }

        if (king_parent->left == king_parent_last)
        



}               