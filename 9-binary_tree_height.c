#include "binary_trees.h"

/**
 * binary_tree_height- measure height of a binary tree
 * @tree: tree to measure
 *
 * Return: size of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->left);

	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);

}
