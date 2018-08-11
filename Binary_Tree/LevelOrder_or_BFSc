#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

void Level_Order(struct node* root)
{
	int h = height(root);
	int i;
	for(i = 1;i<=h;i++)
	{
		LevelOrder(root,i);
	}
}

void LevelOrder(struct node* root,int level)
{
	if(root == NULL)
	{
		return;
	}
	if(level == 1)
	{
		printf("%d ",root->data);
	}
	else if(level > 1)
	{
		LevelOrder(root->left, level-1);
		LevelOrder(root->right, level-1);
	}
}

int height(struct node* node)
{
	if(node == NULL)
	{
		return 0;
	}
	else
	{
		int lheight = height(node->left);
		int rheight = height(node->right);
		if(lheight > rheight)
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
	struct node* node = ((struct node *)malloc(sizeof(struct node)));
	
	node->data = data;
	node->left = NULL;
	node->right = NULL;
}

int main()
{
	struct node *root = newNode(4);
	root->left = newNode(5);
	root->right = newNode(6);
	root->right->right = newNode(1);
	root->left->left = newNode(3);

	printf("Level_Order_Traversal/Breadth Search Traversal => "); 
	Level_Order(root);
	printf("\n");

}
