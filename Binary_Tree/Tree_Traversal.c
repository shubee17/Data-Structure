//Tree Traversal inorder,preorder and postorder

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
        struct node *left;
        struct node *right;
};
 
struct node* newNode(int data)
{
	struct node* node =(struct node*)malloc(sizeof(struct node));
        node->data = data;
        node->left = NULL;
        node->right = NULL;
        return(node);
}

void inorder(struct node* node)
{
	if (node == NULL)
	{
		return;
	}
	inorder(node->left);
	printf("%d ", node->data);
	inorder(node->right);
}

void preorder(struct node* node)
{
	if (node == NULL)
	{
		return;
	}
	printf("%d ", node->data);
	preorder(node->left);
	preorder(node->right);
}
 
void postorder(struct node* node)
{
	if (node == NULL)
	{
		return;
	}
	postorder(node->left);
	postorder(node->right);
	printf("%d ", node->data);
}

int main()
{
    	struct node *root = newNode(1);
    	root->left = newNode(2);
    	root->left->left = newNode(3);
    	root->right = newNode(4);
   	root->right->left = newNode(5);
    	root->right->right = newNode(6);
 	
	printf("InOrder Traversal::\n");
	inorder(root);
	
	printf("\n\nPreOrder Traversal::\n");
	preorder(root);

	printf("\n\nPostOrder Traversal::\n");
	postorder(root);
	printf("\n");

    	return 0;
}
