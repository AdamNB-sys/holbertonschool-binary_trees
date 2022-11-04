#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts right child nodes
 * @parent: parent node
 * @value: value to put in node
 * Return: Pointer to node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    if (!parent)
        return (NULL);

    newNode = binary_tree_node(parent, value);
    if (parent->right)
    {
        newNode->right = parent->right;
        parent->right->parent = newNode;
    }
    parent->right = newNode;

    return (newNode);
}
