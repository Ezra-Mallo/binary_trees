#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - function travers through a BT using in-order
 * @tree: the node
 * @func: function
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	printf("%d\n", tree->n);
	binary_tree_inorder(tree->right, func);

}