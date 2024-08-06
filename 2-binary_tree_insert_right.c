#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function
 * @parent: pointer
 * @value: value
 * Return: rightnode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode, *temp = NULL;

	if (parent == NULL)
		return (NULL);
	rightnode = malloc(sizeof(binary_tree_t));
	if (rightnode == NULL)
		return (NULL);

	rightnode->n = value;
	rightnode->left = NULL;
	rightnode->right = NULL;
	if (parent != NULL)
	{
		temp = parent->right;
		parent->right = rightnode;
	}
	rightnode->parent = parent;
	if (temp != NULL)
	{
		temp->parent = rightnode;
		rightnode->right = temp;
	}

	return (rightnode);
}
