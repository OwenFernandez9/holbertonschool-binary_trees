#include "binary_trees.h"
/**
 * count - function to count recursively
 * @tree: tree
 * Return: amount of nodes
 */
size_t count(const binary_tree_t *tree)
{
	int countr = 0, countl = 0;

	if (tree == NULL)
		return (-1);

	countr = count(tree->right);
	countl = count(tree->left);
	if (countr > countl)
		return (countr + 1);
	return (countl + 1);
}
/**
 * binary_tree_height - function
 * @tree: tree
 * Return: amount of nodes
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (count(tree));
}
