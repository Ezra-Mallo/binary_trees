#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root -function that checks if a given node is a root
 * @node: the node memory address
 * Return: 1 if it is root or zero if otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
		return (0);
	if (node->left != NULL && node->right != NULL)
		return (1);
	else
		return (0);

}
