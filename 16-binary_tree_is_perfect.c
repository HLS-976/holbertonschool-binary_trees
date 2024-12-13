#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Height of the tree, or 0 if tree is NULL
 */
int get_height(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		l = 1 + get_height(tree->left);
	if (tree->right)
		r = 1 + get_height(tree->right);

	return (l > r ? l : r);
}
/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: Size of the tree (number of nodes), or 0 if tree is NULL
 */
int get_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + get_size(tree->left) + get_size(tree->right));
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, pow = 0, res = 2;

	if (!tree)
		return (0);

	height = get_height(tree);
	size = get_size(tree);

	while (pow < height)
	{
		res = res * 2;
		pow++;
	}

	if (size == res - 1)
		return (1);

	return (0);
}
