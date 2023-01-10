#include "binary_trees.h"

/**
 * binary_tree_depth- measure depth of node
 * @tree: tree to measure
 *
 * Return: detph or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth = depth + 1;
		tree = tree->parent;
	}

	return (depth);
}
