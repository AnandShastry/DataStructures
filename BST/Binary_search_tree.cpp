
#include <iostream>

using namespace std;

typedef struct node
{
   int key;
   struct node* left;
   struct node* right;
}NODE;

NODE* newNode(int value)
{
	NODE* temp=new NODE;
	temp->key=value;
	temp->left=temp->right=NULL;
	return temp;
}

NODE* search(NODE* root,int key)
{
	if(root==NULL || root->key==key)
		return root;

	if(root->key>key)
		return search(root->right,key);

	return search(root->left,key);
}

NODE* insert(NODE* n,int value)
{
     if(n==NULL)
    	 return newNode(value);

		 if(value<n->key)
			 n->left=insert(n->left,value);
		 else
			 n->right=insert(n->right,value);
     return n;
}


void inorder(NODE* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->key<<endl;
		inorder(root->right);
	}
}

int main()
{
	NODE* root=NULL;
	root=insert(root,80);
	insert(root,70);
	insert(root,90);
	insert(root,50);
	insert(root,85);
	insert(root,55);
	insert(root,45);
	insert(root,35);

	inorder(root);
	cout << "" << endl; // prints 
	return 0;
}
