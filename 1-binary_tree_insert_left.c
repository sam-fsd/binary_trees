#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts left child node
 *
 * @parent: parent whose child we're inserting
 * @value: int value of child node
 *
 * Return: pointer to the child node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
