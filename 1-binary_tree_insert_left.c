#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function
 * @parent: pointer
 * @value: value
 * Return: leftnode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode, *temp = NULL;

	leftnode = malloc(sizeof(binary_tree_t));
	if (leftnode == NULL)
		return (NULL);

	leftnode->n = value;
	leftnode->left = NULL;
	leftnode->right = NULL;
	if (parent != NULL)
	{
		parent->left = leftnode;
		temp = parent->left;
	}
	leftnode->parent = parent;
	if (temp != NULL)
	{
		temp->parent = leftnode;
		leftnode->left = temp;
	}

	return (leftnode);
}
