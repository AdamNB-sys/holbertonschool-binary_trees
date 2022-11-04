#include "binary_trees.h"

/**
 * binary_tree_height - counts the layers of a tree
 * @tree: tree to count
 * Return: height of tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left = 0;
    size_t right = 0;

    if (!tree)
        return (0);

    if (tree->left)
        left = 1 + binary_tree_height(tree->left);
    if (tree->right)
        right = 1 + binary_tree_height(tree->right);
    if (left >= right)
        return (left);

    return (right);
}
