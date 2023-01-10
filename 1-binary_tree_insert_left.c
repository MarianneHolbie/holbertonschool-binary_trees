#include "binary_trees.h"

/**
 * binary_tree_insert_left- insert left-child node
 * @parent: parent to insert
 * @value: value of new node
 *
 * Return: pointer to created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree_left, *tmp;

	new_tree_left = malloc(sizeof(binary_tree_t));

	if (new_tree_left == NULL || parent == NULL)
	{
		free(new_tree_left);
		return (NULL);
	}

	if (parent->left)
	{
		tmp = parent->left;
		new_tree_left->parent = parent;
		new_tree_left->n = value;
		new_tree_left->left = tmp;
		parent->left = new_tree_left;
		tmp->parent = new_tree_left;
		return (new_tree_left);

	}
	else
	{
		new_tree_left->parent = parent;
		new_tree_left->n = value;
		parent->left = new_tree_left;
	}

	return (new_tree_left);
}
