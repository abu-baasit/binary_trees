#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that insert a node as the
 * right-child of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: storage for the new node.
 * Return: return NULL
 * Description: the new node takes the position of the parent
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
