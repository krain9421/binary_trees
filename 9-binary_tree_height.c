#include "binary_trees.h"

/**
 * binary_tree_height - returns the height of a binary tree
 * @tree: root node to draw height from for tree
 *
 * Return: size_t representing height, 0 on failure or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	/*Empty tree has a height of 0*/
	if (tree == NULL)
		return 0;

	/*Get the height of left and right sub-trees*/
	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	/*Return the maximum of left & right height*/
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
