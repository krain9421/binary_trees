#include "binary_trees.h"

/**
 * depth - utility function to find depth of node
 * @node: this node to check
 *
 * Return: depth of node
 */
int depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}

/**
 * is_perfect - recursive function to check if binary tree
 * is perfect.
 * @root: root node
 * @d: depth
 * @level: level
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *root, int d, int level)
{
	if (root == NULL)
		return (1);

	if (root->left == NULL && root->right == NULL)
		return (d == level + 1);

	if (root->left == NULL || root->right == NULL)
		return (0);

	/*Left and right subtrees must be perfect*/
	return (is_perfect(root->left, d, level + 1) &&
		is_perfect(root->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - wrapper function to check if
 * a tree is perfect.
 * @tree: tree to check
 *
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = 0;

	d = depth(tree);
	return (is_perfect(tree, d, -1));
}

