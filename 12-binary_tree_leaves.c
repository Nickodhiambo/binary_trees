#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to root node
 * Return: The number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	leaf_nodes = binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right);

	return (leaf_nodes);
}
