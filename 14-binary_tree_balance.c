#include "binary_trees.h"
#include <unistd.h>
#include <stdio.h>

/**
 * binary_tree_height_ - measures the height of a binary tree
 * @tree: the tree to mesures
 *
 * Return: height of the tree or 0 if tree is NULL
 */
int binary_tree_height_(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL || tree->left == NULL)
		return (1);

	left_height = binary_tree_height_(tree->left);
	right_height = binary_tree_height_(tree->right);
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree to measure
 *
 * Return: balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;
	int nb;

	if (tree == NULL)
		return (0);
	left = binary_tree_height_(tree->left);
	right = binary_tree_height_(tree->right);
	nb = left - right;
	return (nb);
}

