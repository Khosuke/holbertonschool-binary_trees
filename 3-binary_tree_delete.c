#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: the tree to delete
 *
 * Return: No return.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->parent == NULL && tree->left == NULL && tree->right == NULL)
		return;
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	free(tree);
}
