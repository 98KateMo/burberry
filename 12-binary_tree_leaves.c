#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the number of leaves in a binary tree.
 * @tree: Pointer to the tree to count the leaves from.
 *
 * Return: Number of leaves.
 *         0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
        /* Check if the tree is NULL (base case for recursion) */
        if (!tree)
                return (0);

        /* Check if the current node is a leaf */
        if (!tree->left && !tree->right)
                return (1);

        /* Recursively count leaves in the left and right subtrees */
        return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
