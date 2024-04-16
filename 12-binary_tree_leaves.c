#include "binary_trees.h"

/**
 * binary_tree_leaves- counts the leaves in a binary tree.
 *
 * @tree: a pointer to the root node of the tree.
 *
 * Return: a size_t count of leaf nodes in the tree.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && node->right == NULL)
		return 1;
	else
		leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (leaves);
}
