#include "binary_trees.h"

/**
 * binary_tree_nodes- counts the nodes with at least one child
 * in a binary tree.
 *
 * @tree: a pointer to the root node of the tree.
 *
 * Return: a size_t count of nodes in the tree with a child.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t parents = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (1);
	
	parents = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (parents);
}
