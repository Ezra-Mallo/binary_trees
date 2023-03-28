#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - this inserts a new node to the right
 * @parent: the root of the tree
 * @value: the value n to be added to the tree
 * Return: the return value is a memory address
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newChild;

	if (parent == NULL)
		return (NULL);
	newChild = malloc(sizeof(binary_tree_t));

	if (newChild == NULL)
		return (NULL);

	newChild->n = value;
	newChild->parent = parent;
	newChild->left = NULL;
	newChild->right = parent->right;
	parent->right = newChild;

	if (newChild->right)
		newChild->right->parent = newChild;
	return (newChild);
}
