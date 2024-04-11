#include "binary_trees.h"

/**
 * binary_tree_delete - delete entire tree
 * @tree: pointer to tree
 * Return: nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		tree = NULL;
		free(tree);
	}
}
