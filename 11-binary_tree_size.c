#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer node binary tree
 *
 * Return: measures the size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
