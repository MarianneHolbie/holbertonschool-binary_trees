<<<<<<< HEAD

#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));

    if (node == NULL)
    {
        free(node);
        return NULL;
    }
    
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;
    node->n = value;

    return node;
=======
#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - to create a binary tree node
 * @parent: a pointer to the parent node of the node
 * @value: the value to put in the new node
 *
 * Return: a pointer to new node or if failure NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
>>>>>>> 6454396b837d4dba126cd41017d5ac9966213cf5
}
