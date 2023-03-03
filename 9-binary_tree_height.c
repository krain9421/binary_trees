#include "binary_trees.h"
#define max(a, b) ((a) > (b) ? (a) : (b))

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
		return (0);

	/*Get the height of left and right sub-trees*/
	if (tree->left)
		left_height += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height += 1 + binary_tree_height(tree->right);

	/*Return the maximum of left & right height*/
	return (max(left_height, right_height));
}
