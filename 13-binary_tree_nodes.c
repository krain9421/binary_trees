#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the leaves in a binary tree
 * @tree: pointer node binary tree
 *
 * Return: Number the leaves in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	/*Check if node has either left or right child*/
	if (tree->left || tree->right)
		nodes += 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
