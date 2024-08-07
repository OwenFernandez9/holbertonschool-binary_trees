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

	count += binary_tree_size(tree->right);
	count += binary_tree_size(tree->left);
	count += 1;

	return (count);

}
/**
 * binary_tree_is_full - function
 * @tree: pointer
 * Return: 1 is full or 0 is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	
}
