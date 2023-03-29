#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - the memory address of the node
 * @node: Value of the node
 * Return: Returns an int value
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
