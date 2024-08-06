#include "binary_trees.h"
/**
 * binary_tree_depth - function
 * @tree: tree
 * Return: count
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}
