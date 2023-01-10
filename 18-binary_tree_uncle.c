#include "binary_trees.h"

/**
 * binary_tree_uncle- find uncle of node
 * @node: node to find the uncle
 *
 * Return: uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->left || !node->parent->right
			|| !node->parent->parent
			|| !node->parent->parent->left
			|| !node->parent->parent->right)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);

	return (NULL);
}
