#include "binary_trees.h"

/**
 * binary_tree_is_perfect- check if tree is perfect
 * @tree: tree to check
 *
 * Return: 1 if perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (binary_tree_is_full(tree->left) == (binary_tree_is_full(tree->right)))
	{
		if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		{
			return (1);
		}
	}
	return (0);
}
