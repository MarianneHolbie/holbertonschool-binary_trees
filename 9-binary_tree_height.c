#include "binary_trees.h"

/**
 * binary_tree_height- measure height of a binary tree
 * @tree: tree to measure
 *
 * Return: size of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int child = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		child = child + 1;
	if (tree->right)
		child = child + 1;

	return (child);

}
