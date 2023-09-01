#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a
 * binary tree
 * @tree: Pointer to root node
 * Return: The balancing factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t bf;
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left_height += 1 + binary_tree_balance(tree->left);
	}
	if (tree->right)
	{
		right_height += 1 + binary_tree_balance(tree->right);
	}
	bf = left_height - right_height;
	return (bf);
}
