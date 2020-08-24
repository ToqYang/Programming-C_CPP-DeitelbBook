#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * node - Node to a tree based in fig
 * @data: (int) Integer
 * @left: (struct node *) Address of the left part
 * @right: (struct node *) Address of the right part
 *
 * Description: Node of a Binary Tree
 *
 */
struct node {
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node tree;
typedef tree *Tree;

void insert_node(Tree *new, int data);
void inOrder(Tree treePtr);
void preOrder(Tree treePtr);
void postOrder(Tree treePtr);
int max_depth(Tree new);


/**
 * main - (Depth of a Binary Tree)
 *
 * Return: 0 if is success
 */
int main(void)
{
    Tree my_tree = NULL;

    srand(time(NULL));

    for (int i = 0; i < 10; ++i) {
        int num = rand() % 10;
        printf("Token: %d\n", num);
        insert_node(&my_tree, num);
    }

    /* traverse the tree preOrder */
    puts("\n\nThe preOrder traversal is:");
    preOrder(my_tree);
    /* traverse the tree inOrder */
    puts("\n\nThe inOrder traversal is:");
    inOrder(my_tree);
    /* traverse the tree postOrder */
    puts("\n\nThe postOrder traversal is:");
    postOrder(my_tree);

    printf("\nMax deep: %d\n", max_depth(my_tree));

    return (0);
}


/**
 * max_depth - Look which the max depth of the tree
 * @new: (Tree) Node to look
 *
 * Return: Depth the binary tree
 */
int max_depth(Tree new)
{
    if (!new)
        return (0);

    int left_deep = max_depth(new->left);
    int right_deep = max_depth(new->right);

    if (left_deep > right_deep) {
        return (left_deep + 1);
    }
    else {
        return (right_deep + 1);
    }
}



/**
 * insert_node - Insert node
 * @new: (Tree) Binary
 * @data: (int) Data
 *
 */
void insert_node(Tree *new, int data)
{
    /* If not has parent */
    if (!(*new)) {
        *new = malloc(sizeof(tree));

        if (*new) {
            (*new)->data = data;
            (*new)->left = NULL;
            (*new)->right = NULL;
        }
        else {
            puts("It can't make a new node");
        }
    }
    else {
        /* If data is < Going to Left Part */
        if (data < ((*new)->data)) {
            insert_node(&((*new)->left), data);
        }
        else if (data >((*new)->data)) {
            insert_node(&((*new)->right), data);
        }
        else {
            puts("Duplicate");
        }

    }
}

/* begin inorder traversal of tree */
void inOrder(Tree treePtr)
{
    /* if tree is not empty, then traverse */
    if (treePtr != NULL) {
        inOrder(treePtr->left);
        printf("%3d", treePtr->data);
        inOrder(treePtr->right);
    }
}

/* begin preorder traversal of tree */
void preOrder(Tree treePtr)
{
    /* if tree is not empty, then traverse */
    if (treePtr != NULL) {
        printf("%3d", treePtr->data);
        preOrder(treePtr->left);
        preOrder(treePtr->right);
    }
}

/* begin postorder traversal of tree */
void postOrder(Tree treePtr) {
    /* if tree is not empty, then traverse */
    if (treePtr != NULL) {
        postOrder(treePtr->left);
        postOrder(treePtr->right);
        printf("%3d", treePtr->data);
    }
}