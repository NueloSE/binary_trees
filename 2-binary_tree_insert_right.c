#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child
 * @value: is the value to store in the new node
 * Return: a pointer to the created node on success. Otherwise NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		(new_node->right)->parent = new_node;
	}
	parent->right = new_node;
	new_node->parent = parent;
	return (new_node);
}
