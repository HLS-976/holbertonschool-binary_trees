#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: const binary_tree_t *
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);
	left_size += 1 + binary_tree_height(tree->left);
	right_size += 1 + binary_tree_height(tree->right);
	if (left_size > right_size)
		return (left_size);
	return (right_size);
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: size of the tree (number of nodes)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
/**
 * binary_tree_is_perfect - checks if a binary
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if is perfect or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, size, pow = 1, temp = 0;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	while (pow < height)
	{
		pow *= 2;
		temp++;
	}
	if (size == temp - 1)
		return (1);

	return (0);
}
