#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root
 * Return: return count balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


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

