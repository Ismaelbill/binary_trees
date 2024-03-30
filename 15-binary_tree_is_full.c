#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: returns 1 if it's a full node, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		if (tree->left->left || tree->left->right
			|| tree->right->right || tree->right->left)
			return (0);
	}
	else
		return (0);
	return (1);
}
