#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with atleast one child
 * @tree: Pointer to root node
 * Return: Count of nodes with one or more children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	count += 1 + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);

	return (count);
}
