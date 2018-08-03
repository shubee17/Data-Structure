#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

void Height_Tree(struct node* root)
{
	int h = height(root);
	printf("Height of the Tree is => %d\n",h); 
}

int height(struct node* node)
{
	if (node == NULL)
	{
		return 0;
	}
	else
	{
		int lheight = height(node->left);
		int rheight = height(node->right);
		if (lheight > rheight)
		{
			return(lheight+1);
		}
		else
		{ 
			return(rheight+1);
		}
	}
}

struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
}

int main()
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left = newNode(6);
	root->right->right = newNode(7);

	Height_Tree(root);
}
