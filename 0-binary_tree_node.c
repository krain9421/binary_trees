#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary node
 * @parent: this pointer parent binary trees
 * @value: this value new node
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/**Declaring a new binary tree*/
	binary_tree_t *new;

	if (value == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
