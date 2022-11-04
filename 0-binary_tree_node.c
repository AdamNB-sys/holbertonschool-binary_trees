#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree node
 * @parent: parent node
 * @value: value to put in node
 * Return: Pointer to node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

    if (!newNode)
        return (NULL);
    newNode->n = value;
    newNode->parent = parent;
    newNode->left = NULL;
    newNode->right = NULL;
    return (newNode);
}
