#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least
 * 1 child in a binary tree
 * @tree: pointer to the root node of the tree to
 * count the number of nodes
 * Return: Number of child nodes with at leas on child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_child, r_child;

	if (tree == NULL)
		return (0);

	l_child = binary_tree_nodes(tree->left);
	r_child = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (l_child + r_child + 1);
	else
		return (l_child + r_child);
}
