#include "binary_trees.h"

/**
 * binary_tree_size- measures the size of a binary tree.
 *
 * @tree: a pointer to the root onde of the tree to be measured.
 *
 * Return: a size_t number of nodes in the binary tree.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}
