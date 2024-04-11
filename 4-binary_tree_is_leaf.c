#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is a node
 * @node: node
 * Return: 0/1
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* leaf node has no children */
	if ((node->left == NULL && node->right == NULL) || node == NULL)
		return (1);
	return (0);
}
