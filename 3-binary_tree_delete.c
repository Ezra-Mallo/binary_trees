#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - FOr deleting the binary tree
 * @tree: The tree memory address
 */

void binary_tree_delete(binary_tree_t *tree)
{
	free(tree);

}
