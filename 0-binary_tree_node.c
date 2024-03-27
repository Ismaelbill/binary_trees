#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_tree_node = NULL;

	parent_tree_node = malloc(sizeof(binary_tree_t));
	if (parent_tree_node == NULL)
		return (NULL);

	parent_tree_node->parent = parent;
	parent_tree_node->left = NULL;
	parent_tree_node->right = NULL;
	parent_tree_node->n = value;

	return (parent_tree_node);
}
