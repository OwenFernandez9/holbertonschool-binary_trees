#include "binary_trees.h"
/**
 * binary_tree_size - function
 *
 * @tree: tree
 * Return: count
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	count += binary_tree_size(tree->right);
	count += binary_tree_size(tree->left);
	count += 1;

	return (count);

}
