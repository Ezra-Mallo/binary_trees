#include <stdlib.h>
#include "binary_trees.h"
#include  <math.h>

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: the memory address
 * Return: The number height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight = 0, rightheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftheight = 1 + binary_tree_height(tree->left);
	else
		leftheight = 0;

	rightheight = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (leftheight > rightheight ? leftheight : rightheight);
}
