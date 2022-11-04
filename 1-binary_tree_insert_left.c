#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts left child nodes
 * @parent: parent node
 * @value: value to put in node
 * Return: Pointer to node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    if (!parent)
        return (NULL);

    newNode = binary_tree_node(parent, value);
    if (parent->left)
    {
        newNode->left = parent->left;
        parent->left->parent = newNode;
    }
    parent->left = newNode;

    return (newNode);
}
