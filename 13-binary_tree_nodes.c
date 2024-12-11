#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree to check
 *
 * Return: the number of one with atleast 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_tree, right_tree;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_tree = binary_tree_nodes(tree->left);
	right_tree = binary_tree_nodes(tree->right);
	return (left_tree + right_tree + 1);
}
