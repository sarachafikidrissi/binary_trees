#include "binary_trees.h"

/**
 * binary_tree_size - A function that measure the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: size or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;


	if (!tree)
		return (0);

	if (tree->left)
		left_size = binary_tree_size(tree->left);
	if (tree->right)
	right_size = binary_tree_size(tree->right);


	return (1 + left_size + right_size);
}
