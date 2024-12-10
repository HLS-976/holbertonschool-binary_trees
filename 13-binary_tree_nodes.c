#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: const binary_tree_t *
 * Return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t has_child = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		has_child = 1;
	else
		has_child = 0;

	return (has_child + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
