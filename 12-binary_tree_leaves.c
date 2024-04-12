#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leave in a binary
 * @tree: a pointer to the root node of tree
 * Return: number of leaves on success. Otherwise 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
