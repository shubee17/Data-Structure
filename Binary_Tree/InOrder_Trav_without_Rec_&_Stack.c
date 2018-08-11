#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

void MT(struct node *root)
{
	struct node *current,*previous;
	if(root == NULL)
	{
		return;
	}
	current = root;
	while(current != NULL)
	{
		if(current->left == NULL)
		{
			printf("%d ",current->data);
			current = current->right;
		}
		else
		{
			previous = current->left;
			while(previous->right != NULL && previous->right != current)
			{
				previous = previous->right;
			}
			if(previous->right == NULL)
			{
				previous->right = current;
				current = current->left;
			}
			else
			{
				previous->right = NULL;
				printf("%d ",current->data);
				current = current->right;
			}
		}
	}
}

struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

int main()
{
	struct node *root = newNode(11);
	root->left = newNode(22);
	root->right = newNode(33);
	root->left->left = newNode(44);
	root->left->right = newNode(55);

	printf("InOrder Traversal without Using Recursion & Stack => ");
	MT(root);
	printf("\n");
}
