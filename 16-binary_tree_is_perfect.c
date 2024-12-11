#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: the tree to mesures
 * Desc: height
 * Return: height of the tree or 0 if tree is NULL
 */

int height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_height = height(tree->left);
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

	if (left - right == 0)
		return (1);
	else
		return (0);

}
