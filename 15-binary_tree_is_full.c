#include "binary_trees.h"

/**
 * binary_tree_is_full - A function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((tree->left == NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right == NULL))
		return (1);
	if (tree->left)
		binary_tree_is_full(tree->left);
	if (tree->right)
		binary_tree_is_full(tree->right);

	if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
		return (1);
	else
		return (0);
}
