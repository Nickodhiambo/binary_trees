#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree
 * @tree: Pointer to the root node
 * Return: Size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t no_of_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		no_of_nodes += 1 + binary_tree_size(tree->left) +
			binary_tree_size(tree->right);
	}
	return (no_of_nodes);
}
