#include "binary_trees.h"

/**
 * binary_tree_nodes- count node with at least 1 child
 * @tree: tree to test
 *
 * Return: number node with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);


	if (tree->left || tree->right)
	{
		count++;
	}
	return (binary_tree_nodes(tree->left) + count
			+ binary_tree_nodes(tree->right));

}
