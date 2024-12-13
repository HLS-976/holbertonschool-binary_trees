#include "binary_trees.h"
<<<<<<< HEAD
size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if the binary tree is perfect
 * @tree: a pointer to the root of the tree
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((binary_tree_is_full(tree) == 1) &&
			(binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}
/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: a pointer to the root node of the tree
 * Return: 1 if tree is full or 0 on failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}
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
 * binary_tree_balance - measures the size of a binary tree
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
