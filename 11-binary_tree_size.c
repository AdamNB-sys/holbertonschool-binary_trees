#include "binary_trees.h"

/**
 * binary_tree_size - counts number of nodes in a tree
 * @tree: tree to count
 * Return: depth of node or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left, right, count = 0;

    if (!tree)
        return (count);

    left = binary_tree_size(tree->left);
    right = binary_tree_size(tree->right);
    count = left + right + 1;
    return (count);
}
