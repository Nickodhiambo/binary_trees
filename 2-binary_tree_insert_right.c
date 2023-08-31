#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node to the right of parent
 * @parent: Pointer to parent
 * @value: Value to insert to right node
 * Return: pointer to inserted right node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);

	right_child = malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
	{
		return (NULL);
	}
	right_child->parent = parent;
	right_child->n = value;
	right_child->left = NULL;

	/*Replace existing right child*/
	right_child->right = parent->right;
	parent->right = right_child;

	/*Set old right as right node to new child*/
	if (right_child->right)
	{
		right_child->right->parent = right_child;
	}
	return (right_child);
}
