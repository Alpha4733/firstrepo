//https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1
#include <bits/stdc++.h> 
using namespace std; 
struct node
{
	int data;
	struct node *left,*right;
};
struct node* newnode(int data)
{
	struct node* temp=new node;
	temp->data=data;
	temp->left=NULL,temp->right=NULL;
	return temp;
}
