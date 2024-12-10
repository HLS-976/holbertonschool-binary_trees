#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: const binary_tree_t *
 * Return: int
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	return (0);
}