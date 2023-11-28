#include "binary_trees.h"

/**
 * binary_tree_is_root - A functio that checks if a node is a root
 * @node: a pointer to node to check
 * Return: 1 if it is a root, otherwise or NULL 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
