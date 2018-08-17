#include<stdio.h>
#include<stdlib.h>

int search(int array[],int x,int n)
{
	int i;
	for(i = 0;i < n;i++)
	{
		if(array[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void Postorder(int inorder[],int preorder[],int n)
{
	int root = search(inorder, preorder[0], n);
	if(root != 0)
	{
		Postorder(inorder,preorder+1,root);
	}
	if(root != n-1)
	{
		Postorder(inorder+root+1,preorder+root+1,n-root-1);
	}
	printf("%d ",preorder[0]);
}

int main()
{
	int inorder[] = {4,2,5,1,3,6};
	int preorder[] = {1,2,4,5,3,6};
	int n = sizeof(inorder)/sizeof(inorder[0]);
	printf("PostOrder Traversal From Given Inorder and Preorder Traversal => ");
	Postorder(inorder,preorder,n);
	printf("\n");
}
