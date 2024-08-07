#include "binary_trees.h"
/**
 * count - function to count recursively
 * @tree: tree
 * Return: amount of nodes
 */
size_t count0(const binary_tree_t *tree)
{
	int countr = 0, countl = 0;

	if (tree == NULL)
		return (-1);

	countr = count0(tree->right);
	countl = count0(tree->left);
	if (countr > countl)
		return (countr + 1);
	return (countl + 1);
}
/**
 * binary_tree_height - function
 * @tree: tree
 * Return: amount of nodes
 */
size_t binary_tree_height0(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (count0(tree) + 1);
}
/**
 * binary_tree_balance - function
 * @tree: pointer
 * Return: height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height = 0;

	if (tree == NULL)
		return (0);

	height -= binary_tree_height0(tree->right);
	height += binary_tree_height0(tree->left);

	return (height);
}
