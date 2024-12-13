#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: the tree to mesures
 * Desc: height
 * Return: height of the tree or 0 if tree is NULL
 */

int height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = height(tree->left);
	if (tree->right != NULL)
		right_height = height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - Entry point
 * @tree: struct
 * Desc: perfect tree
 * Return: integer
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		if (left == right)
			return (1);
	}
	return (0);
}
