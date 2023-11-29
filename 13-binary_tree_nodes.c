#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NULL, otherwise number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes = 0;
	size_t right_nodes = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left)
		left_nodes = binary_tree_nodes(tree->left);
	if (tree->right)
		right_nodes = binary_tree_nodes(tree->right);

	return (1 + left_nodes + right_nodes);
}
