#include "binary_trees.h"

/**
 * binary_tree_insert - inserts a node as the left-child of another node
 * @parent: binary_tree_t *
 * @value: int
 * Return: binary_tree_t *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child;
	binary_tree_t *parent_node = parent;

	if (!parent_node)
		return( NULL);

	new_left_child = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!new_left_child)
		return (NULL);

	new_left_child->n = value;
	new_left_child->left = NULL;
	new_left_child->right = NULL;

	if (!parent->left)
	{
		parent_node->left = new_left_child;
		new_left_child->parent = parent_node;
	}
	else
	{
		parent_node->left->parent = new_left_child;
		new_left_child->left = parent_node->left;
		new_left_child->parent = parent_node; 
		parent_node->left = new_left_child;
	}

	return (new_left_child);
}
