#include "binary_trees.h"

/**
 * binary_tree_sibling- find the sibling node
 * @node: sibling node
 *
 * Return: pointer on sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	tmp = node->parent;

	if (tmp->left != node)
		return (tmp->left);
	else
		return (tmp->right);
}
