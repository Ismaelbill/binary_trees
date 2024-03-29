#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node
 * Return: return a pointer to the sibling node, otherwise NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
