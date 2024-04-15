#include "binary_trees.h"

/**
 * binary_tree_postorder- traverses a binary tree
 * using the post-order method.
 *
 * @tree: a pointer to the root of the binary tree.
 * @func: a pointer to a function to call for each node.
 *
 * Return: nothing.
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if ((tree) && (func))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
