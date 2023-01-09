#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new = malloc(sizeof(binary_tree_t));
        if (!parent || !new)
            return (NULL);

        new->parent = parent;
        new->n = value;
        new->right = NULL;
        new->left = NULL;

        if (parent->right)
        {
                new->right = parent->right;
                new->right->parent = new;
        }

        parent->right = new;
        return (new);
}