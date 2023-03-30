#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree:
 * Return:
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
