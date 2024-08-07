#include "binary_trees.h"
/**
 * aux -function count nodes that don't work for me
 * @tree: pointer
 * Return: nodes that are not useful
 *
 */
int aux(const binary_tree_t *tree)
{
	int  count = 0;

	if (tree == NULL)
		return (0);

	if (!tree->right != !tree->left)
	{
		count++;
	}
	count += aux(tree->right);
	count += aux(tree->left);
	
	return (count);
}
/**
 * binary_tree_is_full - function
 * @tree: pointer
 * Return: 1 is full or 0 is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int result;

	if (tree == NULL)
		return (0);

	result = aux(tree);

	if (result == 0)
		return (1);
	return (0);
}
