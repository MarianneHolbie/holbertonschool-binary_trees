#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
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