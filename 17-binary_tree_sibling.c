#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
        binary_tree_t *cache;

        if (!node)
                return (NULL);
        
        cache = node->parent;
        if (!cache)
                return (NULL);
        
        if (cache->left == node)
                return (cache->right);
        else if (cache->right == node)
                return (cache->left);
        return (NULL);

}               