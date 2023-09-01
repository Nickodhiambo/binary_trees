#include "binary_trees.h"

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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to root node
 * Return: 1 if tree is perfect, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, max_nodes;
	int node_count = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	max_nodes = (1 << height) - 1;
	count_nodes(tree, &node_count);

	if (node_count == max_nodes)
		return (1);
	else
		return (0);
}

/**
 * count_nodes - Counts the number of nodes of a tree
 * @tree: Pointer to root node
 * @count: Traverses each node taking count
 */

void count_nodes(const binary_tree_t *tree, int *count)
{
	if (tree != NULL)
	{
		count++;
		count_nodes(tree->left, count);
		count_nodes(tree->right, count);
	}
}
