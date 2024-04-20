#include "binary_trees.h"

/**
 * binary_tree_levelorder- traverses a binary tree in level-order.
 *
 * @tree: a pointer to the root node of the tree.
 * @func: a pointer to the function to call for each node.
 *
 * Return: nothing.
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int front = 0, rear = 0;
	binary_tree_t **queue = NULL;
	binary_tree_t *current;
	size_t nodes;

	if (!tree || !func)
		return;

	nodes = binary_tree_size(tree);
	queue = (binary_tree_t **)malloc(nodes * sizeof(binary_tree_t *));
		if (!queue)
			return;

	queue[rear++] = (binary_tree_t *)tree;
	while (front != rear)
	{
		current = queue[front++];
		func(current->n);

		if (current->left)
			queue[rear++] = current->left;

		if (current->right)
			queue[rear++] = current->right;
	}
	free(queue);
}

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
