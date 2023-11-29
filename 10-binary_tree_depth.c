#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth
 * of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: depth of tree or 0 if NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree || !tree->parent)
		return (0);
	depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
