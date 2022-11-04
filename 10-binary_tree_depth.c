#include "binary_trees.h"

/**
 * binary_tree_depth - finds depth of node is in a tree
 * @tree: tree to count
 * Return: depth of node or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    unsigned int depth = 0;

    if (tree && tree->parent)
        depth = 1 + binary_tree_depth(tree->parent);

    return (depth);
}
