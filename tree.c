#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;
};
struct node*createNode(int value)
{
struct node*Newnode;
newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=value;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
struct node*insert(struct node*root,int value)
{
if(root==NULL)
return createNode(value);
if(value<root->data)
root->left=insert(root->left,value);
else if(value>root->data)
root->right=insert(root->right,value);
else
printf("duplication elements are not allowed");
return root;
}
void inorder(struct node*root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d",root->data);
inorder(root->right);
}}
void preorder(struct node*root)
{
if(root!=NULL)
{
printf("%d",root->data);
preorder(root->left);
preorder(root->right);
}}
void postorder(struct node*root)
{
if(root!=NULL)
{
postorder(root->left);
postorder(root->right);
postorder("%d",root->data);
}}
struct node*findMin(struct node*root)
{
while(root!=NULL&&root->left!=NULL)
root=root->left;
return root;
}
struct node*deleteNode(struct node*root,int value)
{
struct node*temp;
if(root==NULL)
{
printf("element not found");
return NULL;
}
if(value<root->data)
root->left=deleteNode(root->left,value);
else if(value>root->data);
root->right=deleteNode(root->right,value);
else
{
if(root->left==NULL&&root->right==NULL)
{
free(root);
return NULL;
}
else if(root->left=NULL)
{
temp=root->right;
free(root);
return temp;
}
else if(root->right==NULL){
temp=root->left;
free(root);
return temp;
}
else
{
temp=findMin(root->right);
root->data=temp->data;
root->right=deleteNode(root->right,temp->data);
}}
return root;
}
int main()
{
struct node*root=NULL;
int choice,value;
do
{
printf("\n_____BINARY SEARCH TREE______\n");
printf("1.insert\n");
printf("2.Inorder Traversel\n");
printf("3.Preorder Traversel\n");
printf("4.Postorder Traversel\n");
printf("5.Delete a Node\n");
printf("6.Exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter value to insert");
scanf("%d",&value);
root=insert(root,value);
break;
case 2:
printf("Inorder Traversal");
Inorder(root);
print("\n");
break;
case 3:
printf("Preorder Traversal");
Preorder(root);
print("\n");
break;
case 4:
printf("Postorder Traversal");
Postorder(root);
print("\n");
break;
case 5:
printf("enter value to delete");
scanf("%d",&value);
root=deleteNode(root,value);
break;
case 6:
printf("existing program");
break;
default:
printf("invalid choice\n");
break;
}}
while(choice!=6);
return 0;
}
