#include "binary_trees.h"

/**
 * is_perfect - helper function to check if a tree is perfect
 * @tree: tree to check
 *
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + is_perfect(tree->left);
		right = 1 + is_perfect(tree->right);
		if (right == 1 && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - function that checks if a binary
 * tree is perfect.
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
		return (0);

	else
	{
		res = is_perfect(tree);
		if (res != 0)
			return (1);

		return (0);
	}
}
