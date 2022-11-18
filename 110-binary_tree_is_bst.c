#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a tree is a valid binary search tree
 * @tree: pointer to the root node of the tree
 * Return: 1 if tree is valid, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    else
        return (is_valid_bst(tree, INT_MIN, INT_MAX));
}

/**
 * is_valid_bst - validates binary search tree
 * @min: minimum value of left node
 * @max: maximum value of right node
 * Return: 1 if tree is valid, 0 otherwise
 */
int is_valid_bst(const binary_tree_t *tree, int min, int max)
{
    if (!tree)
        return (1);

    if (tree->n < min || tree->n > max)
        return (0);

    return (is_valid_bst(tree->left, min, tree->n - 1) && is_valid_bst(tree->right, tree->n + 1, max));
}
