#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is a node
 * @node: node
 * Return: 0/1
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
