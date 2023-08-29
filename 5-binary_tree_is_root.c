#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root node
 *
 * @node: node in question
 * Return: 1 if root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
		return (1);
	else
		return (0);
}
