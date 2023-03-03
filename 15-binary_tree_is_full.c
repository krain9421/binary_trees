#include "binary_trees.h"

/**
 * binary_tree_is_full - function to checks if a binary tree is full
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if tree is full or 0 in otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/*Check if the node has no children*/
	if (!tree->left && !tree->right)
		return (1);

	/**
	 * Checks if the node has left & right child.
	 * Recursively check if the left & right child
	 * are full.
	 */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
