#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @number: Number to be printed
 */
void print_num(int number)
{
	printf("%d\n", number);
}

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * the value in the node must be passed a a parameter to this function
 * Return: always void
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
