#include "binary_trees.h"
/**
 * binary_tree_leaves - function
 * @tree: pointer
 * Return: count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	count += binary_tree_leaves(tree->right);
	count += binary_tree_leaves(tree->left);
	count += binary_tree_is_leaf(tree);

	return (count);
}
