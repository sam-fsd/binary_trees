#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that inserts a node
 * as the left-child of another node
 * @parent: pointer to the node to insert
 * @value: value to add in the new node
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL || parent == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
	}
	else
	{
		newnode->left = NULL;
	}
	parent->left = newnode;
	return (newnode);
}
