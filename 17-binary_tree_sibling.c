#include "binary_trees.h"

/**
 * A fucntion that finds sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: A pointer to sibling node , or NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node != node->parent->left)
		sibling = node->parent->left;
	else
		sibling = node->parent->right;

	return (sibling);
}
