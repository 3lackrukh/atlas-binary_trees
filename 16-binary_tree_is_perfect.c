#include "binary_trees.h"

/**
* binary_tree_is_perfect- checks if a binary tree is perfect.
*
* @tree: a pointer to the root node of the binary tree.
*
* Return: 1 if the tree is perfect. 0 otherwise.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

if (tree->left == NULL && tree->right == NULL)
	return (1);

if (!binary_tree_is_perfect(tree->left))
	return (0);

if (!binary_tree_is_perfect(tree->right))
	return (0);

if (binary_tree_h(tree->left) == binary_tree_h(tree->right))
	return (1);

return (0);
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
