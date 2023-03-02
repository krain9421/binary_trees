#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree with pre-order traversal
 * @tree: const pointer to root node to begin traversal at.
 * @func: pointer to function to call on tree node's data.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func); /*Recursively traverse left*/
	binary_tree_preorder(tree->right, func); /*Recursively traverse right*/
}
