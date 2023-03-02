#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: nodes is binary trees
 * Return: 1 if node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*Check if the node has a left-chlld and right-child*/
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
