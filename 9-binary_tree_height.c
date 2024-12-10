#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: const binary_tree_t *
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		binary_tree_height(tree->left);
		count++;
	}

	if (tree->right)
	{
		binary_tree_height(tree->right);
		count++;
	}

	return (count);
}
