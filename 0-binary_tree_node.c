#include "binary_trees.h"
/**
 * binary_tree_node - function
 *
 * @parent: pointer
 * @value: value
 * Return: newnode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = NULL;

	return (newnode);
}
