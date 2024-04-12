#include "binary_trees.h"

/**
 * max_num - computes the maximum number between 2 numbers
 * @num: first number
 * @num2: second number
 * Return: The maximum number
*/

size_t max_num(size_t num, size_t num2)
{
	if (num > num2)
		return (num);
	return (num2);
}

/**
 * tree_height - compute the height of a binary tree
 * @tree: pointer to the tree to compute the maximum hieght
 * Return: height of the tree
*/
size_t tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + max_num(tree_height(tree->left), tree_height(tree->right)));
}

/**
 * binary_tree_height - compute the height of a binary tree
 * @tree: pointer to the tree to compute the maximum height
 * Return: height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = tree_height(tree);

	if (tree == NULL)
		return (0);
	return (count - 1);
}
