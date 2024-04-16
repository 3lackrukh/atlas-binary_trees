#include "binary_trees.h"

/**
 * binary_tree_balance- measures the balance factor of a binary tree.
 *
 * @tree: a pointer to the root node of the binary tree.
 *
 * Return: an int measure of the balance.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
		int r_height = 0, l_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		l_height = 1 + binary_tree_h(tree->left);

	if (tree->right)
		r_height = 1 + binary_tree_h(tree->right);

	return (l_height - r_height);
}

/**
 * binary_tree_h- measures the height of a binary tree.
 *
 * @tree: a pointer to the root node of the tree.
 *
 * Return: an int measure of the height.
*/

int binary_tree_h(const binary_tree_t *tree)
{
	int r_height = 0, l_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		l_height = 1 + binary_tree_h(tree->left);

	if (tree->right)
		r_height = 1 + binary_tree_h(tree->right);

	if (l_height >= r_height)
		return (l_height);
	else
		return (r_height);
}
