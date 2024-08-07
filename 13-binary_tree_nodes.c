#include "binary_trees.h"
/**
 * binary_tree_nodes - function
 * @tree: pointer
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	if (tree->right || tree->left)
		count = 1;

	count += binary_tree_nodes(tree->right);
	count += binary_tree_nodes(tree->left);

	return (count);
}
