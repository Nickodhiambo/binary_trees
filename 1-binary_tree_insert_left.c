#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * of another node
 * @parent: Pointer of the node to insert the left child in
 * @value: Value to insert to child node
 * Return: Pointer to child node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);

	left_child = malloc(sizeof(binary_tree_t));
	if (left_child == NULL)
		return (NULL);

	left_child->parent = parent;
	left_child->n = value;
	left_child->right = NULL;

	/* Replace old left with new left */
	left_child->left = parent->left;
	parent->left = left_child;

	/* Set old left child as new node to the left of left child */
	if (left_child->left)
	{
		left_child->left->parent = left_child;
	}
	return (left_child);
}
