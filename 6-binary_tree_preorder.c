#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree using pre-order traversal.
 * @tree: Pointer to the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
        /* Check if the tree or the function pointer is NULL */
        if (!tree || !func)
                return;

        /* Call the function for the current node */
        func(tree->n);

        /* Recursively traverse the left subtree */
        binary_tree_preorder(tree->left, func);

        /* Recursively traverse the right subtree */
        binary_tree_preorder(tree->right, func);
}
