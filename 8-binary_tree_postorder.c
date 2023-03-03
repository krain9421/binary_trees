#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a tree with post-order traversal
 * @tree: const pointer to root node to begin traversal at.
 * @func: pointer to function to call on tree node's data.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func); /*Recursively traverse left*/
	binary_tree_postorder(tree->right, func); /*Recursively traverse right*/
	funct(tree->n);
}
