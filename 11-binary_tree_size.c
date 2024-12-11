#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure
 *
 * Return: size of the tree or 0 is tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_tree, right_tree;

	if (tree == NULL)
		return (0);

	left_tree = binary_tree_size(tree->left);
	right_tree = binary_tree_size(tree->right);
	return (left_tree + right_tree + 1);
}
