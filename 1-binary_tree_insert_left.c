#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as a
 * left-child of another in a binary tree.
 * @parent: A pointer to the node to insert the left child
 * @value: The value to store in the new node.
 * Return: return null if parent is NULL or an error occurs
 * Otherwise a pointer to the new node.
 * Description: A new node takes the position of the parent
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
