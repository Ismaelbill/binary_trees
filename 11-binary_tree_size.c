#include "binary_trees.h"

/**
 * binary_tree_size - function that measures
 * the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: returns the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);
	return ((size) + 1);
}
