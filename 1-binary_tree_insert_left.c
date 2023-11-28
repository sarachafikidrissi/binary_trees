#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node as
 * the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node,
 * or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		newnode->right = NULL;
		parent->left = newnode;
		newnode->left->parent = newnode;
		return (newnode->left);
	}
	newnode->left = NULL;
	newnode->right = NULL;
	parent->left = newnode;
	newnode->parent = parent;

	return (newnode);
}
