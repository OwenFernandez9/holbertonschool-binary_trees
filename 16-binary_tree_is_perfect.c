#include "binary_trees.h"
/**
 * binary_tree_size0 - function
 *
 * @tree: tree
 * Return: count
 */
size_t binary_tree_size0(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	count += binary_tree_size0(tree->right);
	count += binary_tree_size0(tree->left);
	count += 1;

	return (count);

}
/**
 * count0 - function to count recursively
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
 * binary_tree_height0 - function
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
 * binary_tree_balance0 - function
 * @tree: pointer
 * Return: height
 */
int binary_tree_balance0(const binary_tree_t *tree)
{
	int height = 0;

	if (tree == NULL)
		return (0);

	height -= binary_tree_height0(tree->right);
	height += binary_tree_height0(tree->left);

	return (height);
}
/**
 * binary_tree_is_perfect - function
 * @tree: tree
 * Return: 1 is perfect or 0 not is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int c, pow = 1;

	if (tree == NULL)
		return (0);
	c = binary_tree_size0(tree) + 1;
	while (pow < c)
		pow *= 2;
	if (pow != c)
		return (0);
	if (binary_tree_balance0(tree) != 0)
		return (0);
	return (1);

}
