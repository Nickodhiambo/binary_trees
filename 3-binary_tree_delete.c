#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to head/root of the tree
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/*Uses post-order traversal to delete nodes*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
