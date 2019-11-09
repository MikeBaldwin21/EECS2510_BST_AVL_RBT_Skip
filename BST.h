/*
 * BST.h
 * Name: Mike Baldwin
 * Course: EECS 2510 Non-Linear Data Structures - Fall 2019
 * Date: 11/9/2019
 * Description: Declaration of the Binary Search tree
*/

#pragma once

class BST
{
public:
	BST();
	void Insert(const char* cArray);
	void Search(const char* cArray);
	void GetHeight();

private:

	struct Node
	{
		char name[50]{};
		int count;
		Node* parent;
		Node* left;
		Node* right;
		
		Node(const char* name, const int count, Node* parent, Node* left, Node* right);
		bool IsRoot();
		bool IsLeaf();
	};

	Node* root;
	bool IsEmpty();
	Node* Find(const char* cArray);
	void Traverse(Node* node);
	int ComputeHeight(Node* node);
};
