#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE 256

struct treeNode {
    struct treeNode *leftPtr; /* pointer to left subtree */
    char *data; /* node value */
    struct treeNode *rightPtr; /* pointer to right subtree */
};


typedef struct treeNode TreeNode; /* synonym for struct treeNode */
typedef TreeNode *TreeNodePtr; /* synonym for TreeNode* */

void insertNode(TreeNodePtr *treePtr, char *str);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);


/**
 * main - (Binary Search Tree of Strings)
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
    TreeNodePtr rootPtr = NULL; /* tree initially empty */
    char str[SIZE], *token = NULL;

    puts("Enter the phrase");
    fgets(str, SIZE, stdin);
    srand(time(NULL));
    puts("The string being placed in the tree are:");
    puts(str);

    token = strtok(str, " ");

    /* insert random values between 0 and 14 in the tree*/
    for (; token; (token = strtok(NULL, " "))) {
        printf("Token: %s\n", token);
        insertNode(&rootPtr, token);
    }
    putchar(10);

    /* traverse the tree preOrder */
    puts("\n\nThe preOrder traversal is:");
    preOrder(rootPtr);
    /* traverse the tree inOrder */
    puts("\n\nThe inOrder traversal is:");
    inOrder(rootPtr);
    /* traverse the tree postOrder */
    puts("\n\nThe postOrder traversal is:");
    postOrder(rootPtr);

    return (0);
}


/* insert node into tree */
void insertNode(TreeNodePtr *treePtr, char *str)
{

    /* if tree is empty */
    if (*treePtr == NULL) {
        *treePtr = malloc(sizeof(TreeNode));
        (*treePtr)->data = malloc((strlen(str)) * sizeof(char));
        /* if memory was allocated, then assign data */
        if (*treePtr != NULL && ((*treePtr)->data)) {
            strcpy(((*treePtr)->data), str);
            (*treePtr)->leftPtr = NULL;
            (*treePtr)->rightPtr = NULL;
        }
        else {
            printf("%s not inserted. No memory available.\n", str);
        }
    }
    else { /* tree is not empty */
    /* data to insert is less than data in current node */
        if (str[0] <= (*treePtr)->data[0]) {
            insertNode(&((*treePtr)->leftPtr), str);
        }
        else if (str[0] >= (*treePtr)->data[0]) {
            insertNode(&((*treePtr)->rightPtr), str);
        }
        else { /* duplicate data value ignored */
            printf("%s", "dup");
        }
        /* SOLUTION change conditions < and > to >= <= */
    }
}


/* begin inorder traversal of tree */
void inOrder(TreeNodePtr treePtr)
{
    /* if tree is not empty, then traverse */
    if (treePtr != NULL) {
        inOrder(treePtr->leftPtr);
        printf("%s ", treePtr->data);
        inOrder(treePtr->rightPtr);
    }
}

/* begin preorder traversal of tree */
void preOrder(TreeNodePtr treePtr)
{
    /* if tree is not empty, then traverse */
    if (treePtr != NULL) {
        printf("%s ", treePtr->data);
        preOrder(treePtr->leftPtr);
        preOrder(treePtr->rightPtr);
    }
}

/* begin postorder traversal of tree */
void postOrder(TreeNodePtr treePtr) {
    /* if tree is not empty, then traverse */
    if (treePtr != NULL) {
        postOrder(treePtr->leftPtr);
        postOrder(treePtr->rightPtr);
        printf("%s ", treePtr->data);
    }
}