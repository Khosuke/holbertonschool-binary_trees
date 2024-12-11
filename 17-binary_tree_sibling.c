#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node the check
 *
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != node && node->parent->left != NULL)
		return (node->parent->left);
	if (node->parent->right != node && node->parent->right != NULL)
		return (node->parent->right);
	else
		return (NULL);
}
