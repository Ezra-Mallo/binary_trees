#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - This inserts a node as the left-child of another
 * @parent:  parent node
 * @value:  Value to  be added
 * Return: the memory address of the struct
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newChild;

	if (parent == NULL)
		return (NULL);
	newChild = malloc(sizeof(binary_tree_t));

	if (newChild == NULL)
		return (NULL);

	newChild->n = value;
	newChild->parent = parent;
	newChild->right = NULL;
	newChild->left = parent->left;
	parent->left = newChild;

	if (newChild->left)
		newChild->left->parent = newChild;
	return (newChild);
}
