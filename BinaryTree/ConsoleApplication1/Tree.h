#pragma once
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class TreeNode {// TreeNode class
public:
	TreeNode* left;
	TreeNode* right;
	int data;

	TreeNode(int data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

class BinaryTree {
private:
	TreeNode* root;
	int length;
public:
	BinaryTree() {
		root = NULL;
		length = 0;
	}
	
	void Insert(int value);// construct the btree in bst order 
	bool look_up(int value);
	int size() { return length; }
	void printBFS();
	void printPre_order();

};
