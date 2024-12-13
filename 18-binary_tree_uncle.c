#include "binary_trees.h"

/**
 * binary_tree_uncle - Entry point
 * @node: pointer
 * Desc: find uncle
 * Return: struct or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncleleft;

	binary_tree_t *uncleright;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->right)
	{
		uncleleft = node->parent->parent->left;
		return (uncleleft);
	}
	if (node->parent == node->parent->parent->left)
	{
		uncleright = node->parent->parent->right;
		return (uncleright);
	}
	return (NULL);
}

