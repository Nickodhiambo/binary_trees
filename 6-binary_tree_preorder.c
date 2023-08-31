#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order
 * traversal
 * @tree: Pointer to root of tree
 * @func: A pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*Traverses tree from root then left then right subtree*/
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
