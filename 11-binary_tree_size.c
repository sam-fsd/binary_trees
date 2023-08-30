#include "binary_trees.h"
/**
 * binary_tree_size - finds size of binary tree
 *
 * @tree: root pointer of the tree
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);
	l_height = binary_tree_size(tree->left);
	r_height = binary_tree_size(tree->right);
	return (l_height + r_height + 1);
}
