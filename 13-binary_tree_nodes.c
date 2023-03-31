#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: pointer to the root
 * Return: return count of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodes += 1;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
