//тото-https://codeacademy.bg/wp-content/uploads/2022/04/BinaryTree.pdf

// #include <stdio.h>
// #include <stdlib.h>
// #define bool int

// struct node
// {
//     int item;
//     struct node *left;
//     struct node *right;
// }

// struct node *newNode(int item)
// {
//     struct node *node = (struct node*)malloc(sizrof(struct node));
//     node->item = item;
//     node->left = NULL;
//     node->right = NULL;

//     return (node);
// }

// bool checkHeightBalance(struct node *root, int *height)
// {
//     int leftHeight = 0, rightHeight = 0;
//     int l = 0, r = 0;

//     if(root == NULL)
//     {
//         *height = 0;
//         return 1;
//     }

//     l = checkHeightBalance(root->left, &leftHeight);
//     r = checkHeightBalance(root->right, &rightHeight);

//     if((leftHeight - rightHeight >=2) || (rightHeight - leftHeight >= 2))
//         return 0;
//     else 
//         return l && r;
// }

// int main()
// {
//     struct node *root = createNode(3);

//     insertLeft(root, 9);
//     insertRight(root, 20);
//     insertRight(root->right, 7);
//     insertLeft(root->right, 15);
//     printf("Inorder traversal \n");
//     inorderTraversal(root);
//     printf("\n");

//     insertLeft(root->left, 1);
//     insertRight(root->right, 2);
//     inorderTraversal(root);
//     printf("\n");

//     printf("\nPreorder traversal \n");
//     preorderTraversal(root);
//     printf("\n");

//     printf("Postorder traversal \n");
//     postorderTraversal(root);

//     if (checkForChildTree(root))
//     {
//         printf("\n\nYES");
//     }
//     else
//     {
//         printf("\n\nNO");
//     }
// }

// /*
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>

// struct node
// {
//     int item;
//     struct node *left;
//     struct node *right;
// };

// void inorderTraversal(struct node *root)
// {
//     if (root = NULL)
//         return;
//     inorderTraversal(root->left);
//     printf("%d ->", root->item);
//     inorderTraversal(root->right);
// }
// void preorderTraversal(struct node *root)
// {
//     if (root == NULL)
//         return;
//     printf("%d ->", root->item);
//     preorderTraversal(root->left);
//     preorderTraversal(root->right);
// }
// void postorderTraversal(struct node *root)
// {
//     if (root == NULL)
//         return;
//     postorderTraversal(root->left);
//     postorderTraversal(root->right);
//     printf("%d ->", root->item);
// }

// struct node *createNode(int value)
// {
//     struct node *newNode = malloc(sizeof(struct node));
//     newNode->item = value;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// struct node *insertLeft(struct node *curr, int value)
// {
//     curr->left = createNode(value);
//     return curr->left;
// }

// struct node *insertRight(struct node *curr, int value)
// {
//     curr->right = createNode(value);
//     return curr->right;
// }

// bool checkForChildTree(struct node *root)
// {
//     if (root == NULL)
//         return true;
//     if ((root->left == NULL) && (root->right = NULL))
//         return true;
//     if ((root->left) && (root->right))
//         return (checkForChildTree(root->left) && checkForChildTree(root->right));
//     return false;
// }

// int main()
// {
//     struct node *root = createNode(3);

//     insertLeft(root, 9);
//     insertRight(root, 20);
//     insertRight(root->right, 7);
//     insertLeft(root->right, 15);
//     printf("Inorder traversal \n");
//     inorderTraversal(root);
//     printf("\n");

//     insertLeft(root->left, 1);
//     insertRight(root->right, 2);
//     inorderTraversal(root);
//     printf("\n");

//     printf("\nPreorder traversal \n");
//     preorderTraversal(root);
//     printf("\n");

//     printf("Postorder traversal \n");
//     postorderTraversal(root);

//     if (checkForChildTree(root))
//     {
//         printf("\n\nYES");
//     }
//     else
//     {
//         printf("\n\nNO");
//     }
// }
// */