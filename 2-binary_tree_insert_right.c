#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as
 * the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node,
 * or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		newnode->left = NULL;
		newnode->parent = parent;
		parent->right = newnode;
		newnode->right->parent = newnode;
		return (newnode->right);
	}
	newnode->right = NULL;
	newnode->left = NULL;
	parent->right = newnode;
	newnode->parent = parent;

	return (newnode);
}
