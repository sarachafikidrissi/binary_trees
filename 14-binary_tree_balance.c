#include "binary_trees.h"
/**
 * binary_tree_balance - A function that measures the balance
 * factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if NULL, otherwise factor balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree , 0 if NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height += 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
