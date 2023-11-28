#include "binary_trees.h"

/**
 * binary_tree_delete - A function that deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left != NULL)
		free(tree->left);
	if (tree->right != NULL)
		free(tree->right);
	free(tree);

	
}
