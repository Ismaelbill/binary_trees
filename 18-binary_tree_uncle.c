#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node
 * Return: return a pointer to the uncle node, otherwise NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL
		|| node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right && node->parent->parent->left)
	{
		if (node->parent == node->parent->parent->right)
			return (node->parent->parent->left);
		else
			return (node->parent->parent->right);
	}

	return (NULL);
}
