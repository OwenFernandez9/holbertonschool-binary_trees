#include "binary_trees.h"
/**
 * binary_tree_is_full - function
 * @tree: pointer
 * Return: 1 is full or 0 is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL && tree->left != NULL)
	{
		if ((tree->right->right == NULL && tree->right->left == NULL) ||
				(tree->left->right == NULL && tree->left->left == NULL))
		{
			return (1);
		}
	}
	return (0);
}
