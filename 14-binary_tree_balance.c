#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a
 * binary tree
 * @tree: Pointer to root node
 * Return: The balancing factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bf;
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left_height += 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right_height += 1 + binary_tree_height(tree->right);
	}
	bf = left_height - right_height;
	return (bf);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: Tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left_height += 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right_height += 1 + binary_tree_height(tree->right);
	}
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
