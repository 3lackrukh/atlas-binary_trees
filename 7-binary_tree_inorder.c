#include "binary_trees.h"

/**
 * binary_tree_inorder- traverses a binary tree
 * using the in-order method.
 *
 * @tree: a pointer to the root of the binary tree.
 * @func: a pointer to a function to call for each node.
 *
 * Return: nothing.
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if ((tree) && (func))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
