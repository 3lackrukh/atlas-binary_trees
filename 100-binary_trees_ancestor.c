#include "binary_trees.h"

/**
 * binary_tree_ancestor- finds the lowest common ancestor
 * of two nodes in a binary tree.
 *
 * @first: a pointer to the first node.
 * @second: a pointer to the second node.
 *
 * Return: a pointer to the lowest common ancestor node of the two.
 * NULL on failure.
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *temp = NULL;

	if (!first || !second)
		return (NULL);

	temp = (binary_tree_t *)first;

	while (temp)
	{
		if (temp == second)
			return (temp);
		temp = temp->parent;
	}
	return (binary_trees_ancestor(first, second->parent));
}
