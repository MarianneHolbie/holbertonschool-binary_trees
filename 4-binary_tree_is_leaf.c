#include "binary_trees.h"

/**
 * binary_tree_is_leaf- check if node is a leaf
 * @node: node to check
 *
 * Return: 1 if leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if ((node && node->left) || (node && node->right))
		return (0);
	return (1);
}
