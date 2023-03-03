#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a tree with in-order traversal
 * @tree: const pointer to root node to begin traversal at.
 * @func: pointer to function to call on tree node's data.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func); /*Recursively traverse left*/
	func(tree->n);
	binary_tree_inorder(tree->right, func); /*Recursively traverse right*/
}
