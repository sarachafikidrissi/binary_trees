#include "binary_trees.h"

/**
 *  binary_trees_ancestor - A function that finds the lowest commen ancesstor
 * between two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: pointer to the common ancesstor
*/


binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *temp_first = first;
	const binary_tree_t *temp_second = second;

	if (!first || !second)
		return NULL;

	binary_tree_t *path_first[1000];
	binary_tree_t *path_second[1000];
	size_t x = 0, y = 0;

	while (temp_first)
	{
		path_first[x++] = (binary_tree_t *)temp_first;
		temp_first = temp_first->parent;
	}

	while (temp_second)
	{
		path_second[y++] = (binary_tree_t *)temp_second;
		temp_second = temp_second->parent;
	}

	size_t i = x - 1, j = y - 1;

	while (i > 0 && j > 0 && path_first[i - 1] == path_second[j - 1])
	{
		i--;
		j--;
	}

	return (i < x) ? path_first[i] : NULL;
}
