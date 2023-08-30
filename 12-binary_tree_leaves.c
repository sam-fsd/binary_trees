#include "binary_trees.h"
/**
 * binary_tree_leaves - counts number of leaves
 *
 * @tree: Binary tree in question
 *
 * Return: no of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			leaves += 1;
		else
			leaves += 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
