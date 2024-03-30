#include "binary_trees.h"


/**
 * is_it_perfect - function checks if a node is a
 * leaf or has two children and returns the result
 * @tree: tree is a pointer to the root node
 * Return: returns 0 if its not perfect, otherwise 1
 */

int is_it_perfect(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (tree->left && tree->right)
	{
		r = 1 + is_it_perfect(tree->right);
		l = 1 + is_it_perfect(tree->left);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	return (0);
}


/**
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 * @tree: tree is a pointer to the root node
 * Return: 0 if perfect, otherwise 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result;

	if (tree == NULL)
		return (0);
	result = is_it_perfect(tree);
	if (result != 0)
		return (1);

	return (0);
}
