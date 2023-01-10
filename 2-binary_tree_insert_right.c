#include "binary_trees.h"

/**
 * binary_tree_insert_right- insert right-child node
 * @parent: parent to insert
 * @value: value of new node
 *
 * Return: pointer to created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree_right, *tmp;

	if (parent == NULL)
		return (NULL);

	new_tree_right = malloc(sizeof(binary_tree_t));

	if (new_tree_right == NULL)
	{
		fprintf(stderr, "Erreur d'allocation memoire.\n");
		return (NULL);
	}

	if (parent->right)
	{
		tmp = parent->right;
		new_tree_right->parent = parent;
		new_tree_right->n = value;
		new_tree_right->right = tmp;
		parent->right = new_tree_right;
		tmp->parent = new_tree_right;
		return (new_tree_right);

	}
	else
	{
		new_tree_right->parent = parent;
		new_tree_right->n = value;
		parent->right = new_tree_right;
	}

	return (new_tree_right);
}
