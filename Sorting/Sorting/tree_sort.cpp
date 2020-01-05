//Tree Sort Algorithm
//Language Used: C++
//Tree Sort Algorithm uses Inorder Traversal of a Binary Search Tree to sort elements in ascending order
//Input Format: First line contains size of array, second line contains array elements
//Output Format: Output contains only one line i.e., sorted array of elements
//Sample Input:  5
//               3 9 0 1 5
//Sample Output: 0 1 3 5 9
//author: adiXcodr

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int key;
	struct Node *left, *right;
};

// Create New Node
struct Node *newNode(int item)
{
	struct Node *temp = new Node;
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

// Storing Inorder traversal in array
void storeSorted(Node *root, int arr[], int &inx)
{
	if (root != NULL)
	{
		storeSorted(root->left, arr, inx);
		arr[inx++] = root->key;
		storeSorted(root->right, arr, inx);
	}
}

//Inserting Value to tree
Node* insert(Node* node, int key)
{

	if (node == NULL)
    return newNode(key);

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);

	return node;
}


void treeSort(int arr[], int len)
{
	struct Node *root = NULL;
	root = insert(root, arr[0]);

	for (int inx=1; inx<len; inx++)
        insert(root, arr[inx]);

	int inx = 0;
	storeSorted(root, arr, inx);
}


int main()
{
  int len;
  cout<<"Enter the Number of Elements ";
  cin>>len;
  int arr[len];
  cout<<"Enter The Elements ";
  for (int inx=0; inx<len; inx++)
	  cin>>arr[inx];
  treeSort(arr, len);
  cout<<"Sorted:\n";
  for (int inx=0; inx<len; inx++)
     cout << arr[inx] << " ";
	return 0;
}
