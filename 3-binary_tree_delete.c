#include "binary_trees.h"

/**
 * binary_tree_delete- frees allocated memory for an entire binary tree.
 * @tree: a pointer to the tree to be deleted.
 *
 * Return: nothing.
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
