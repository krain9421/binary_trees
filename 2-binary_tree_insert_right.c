#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: A pointer to a node to insert the right child in.
 * @value: The value to store in the node.
 * Return: A pointer to to created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	/*Checking if parent or value are not NULL*/
	if (parent == NULL || value == '\0')
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	/*Checking if the parent has a right-child value*/
	if (parent->right != NULL)
	{
		/**
		 * Replace the old node with the new node.
		 * The old node becomes the right-child of new node.
		 */
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;

	return (new);
}
