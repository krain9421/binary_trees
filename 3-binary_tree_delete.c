#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: binary tree
 * Return: Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/*Recursively call the function to delete left & right children*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
