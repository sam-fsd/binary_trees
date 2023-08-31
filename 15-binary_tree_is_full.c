#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if binary tree is full
 *
 * @tree: pointer to tree in question
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - checks recursively if biary tree is full
 *
 * @tree: pointer to the binary tree
 * Return: 1 for full tree, 0 otherwise
 *
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				is_full_recursive(tree->left) == 0 ||
				is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}
