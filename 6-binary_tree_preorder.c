#include "binary_trees.h"

/**
 * binary_tree_preorder- traverses a binary tree
 * using the pre-order method.
 *
 * @tree: a pointer to the root of the binary tree.
 * @func: a pointer to a function to call for each node.
 *
 * Return: nothing.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left);
		binary_tree_preorder(tree->right);
	}
}