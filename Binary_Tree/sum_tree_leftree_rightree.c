//Sum of all element of tree

#include <stdio.h>
#include <stdlib.h>

int tree=0,leftree=0,rightree=0;
struct node
{
	int data;
        struct node *left;
        struct node *right;
};
 
struct node* newNode(int data)
{
	tree = tree + data;
	struct node* node =(struct node*)malloc(sizeof(struct node));
        node->data = data;
        node->left = NULL;
        node->right = NULL;
        return(node);
}

void Left_Tree(struct node* node)
{
	if(node == NULL)
	{
		printf("Sum of all Element of Left-Subtree::%d\n",leftree);
		return;
	}
	Left_Tree(node->left);
	leftree = leftree + node->data;
	Left_Tree(node->right);
}

void Right_Tree(struct node* node)
{
	if (node == NULL)
	{
		printf("Sum of all Element of Right-Subtree::%d\n",rightree);
		return;
	}
	Right_Tree(node->left);
	rightree = rightree + node->data;
	Right_Tree(node->right);
}

int main()
{
    	struct node *root = newNode(1);
    	root->left = newNode(2);
    	root->left->left = newNode(3);
    	root->right = newNode(4);
   	root->right->left = newNode(5);
    	root->right->right = newNode(6);
 	
	printf("Sum of all Element of Tree::%d\n",tree);
	printf("\n");

	Left_Tree(root->left);
	printf("\n");

	Right_Tree(root->right);
	printf("\n");

	return 0;
}
