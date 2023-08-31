#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree in order
 * @tree: Pointer to root
 * @func: A function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*Traverses from left, root, then right subtree*/
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
