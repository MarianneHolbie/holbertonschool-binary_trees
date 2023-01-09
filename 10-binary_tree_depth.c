#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
        binary_tree_t *cache;
        int count = 0; 

        printf("%i", tree->n);

        if (!tree)
                return (0);
        
        cache = tree->parent;
        while (cache)
        {
                count += 1;
                cache = cache->parent;
        }
        return (count);
}