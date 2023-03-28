#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - This inserts a node as the left-child of another
 * @parent:  parent node
 * @value;  Value to  be added
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		parent = binary_tree_node(parent, value);
		return (parent);
	}
	else if (value <= parent->n)
		parent->left = binary_tree_insert_left(parent->left, value);
	else
		parent->right = binary_tree_insert_left(parent->right, value);
	return (parent);
}
