#include "binary_trees.h"
/**
 * binary_tree_height - finds height of binary tree
 *
 * @tree: root pointer of the tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	if (l_height <= r_height)
		return (r_height + 1);
	return (l_height + 1);
}
