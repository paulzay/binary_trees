#include "binary_trees.h"

/**
 * binary_tree_height - h
 * @tree: root node pointer
 * Return: h
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		{
			return (binary_tree_height(tree->left) + 1);
		} else
		{
			return (binary_tree_height(tree->right) + 1); 
		}
	}
	return (0);
}
