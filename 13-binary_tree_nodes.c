#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the leaves in a binary tree
 * @tree: pointer to the root node of tree
 * Return: number of node
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if ((tree == NULL) || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
