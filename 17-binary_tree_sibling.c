#include "binary_trees.h"
/**
 * binary_tree_sibling - function seach sibling
 * @node: pointer to node
 * Return: sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->left);
	return (node->parent->right);

}
