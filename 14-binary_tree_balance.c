#include "binary_trees.h"

/**
 * binary_tree_balance - A function that measures the balance
 * factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if NULL, otherwise factor balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		left_height =1 + binary_tree_balance(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_balance(tree->right);

	return (left_height - right_height);

}
