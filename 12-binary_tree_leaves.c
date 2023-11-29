#include "binary_trees.h"
/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL, otherwise nomber of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0;
	size_t right_leaves = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL & tree->right == NULL)
		return (1);
	if (tree->left)
		left_leaves = binary_tree_leaves(tree->left);
	if (tree->right)
		right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
