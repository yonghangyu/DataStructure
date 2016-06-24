#include"Tree.h"


void BinaryTree::Insert(int value) {
	TreeNode* node = new TreeNode(value);
	int key;
	TreeNode* temp;
	TreeNode* pos=NULL;
	if (root==NULL) {
		root = node;
	}
	else {
		temp = root;
		while (temp!=NULL) {
			key = temp->data;
			if (key<value) {
				if (temp->right != NULL) { temp = temp->right;}
				else { 
					pos = temp; 
					temp = temp->right;
				}
			}
			else {
				if (temp->left != NULL) { temp = temp->left; }
				else {
					pos = temp;
					temp = temp->left;
				}
			}
		}
		if (key > value) { pos->left = node; }
		else { pos->right = node; }
	}
	length++;
}

bool BinaryTree::look_up(int value) {
	TreeNode* temp;
	temp = root;
	int key;
	while (temp!=NULL) {
		key = temp->data;
		if (key<value) {
			temp = temp->right;
		}
		else if (key>value) {
			temp = temp->left;
		}
		else
		{
			cout << "found !" << endl;
			return true;
		}
	}
	cout << "Not found !" << endl;
	return false;
}

void BinaryTree::printBFS() {
	if (root == NULL) { cout << "No treenode can be traversed !" << endl; return; }
	queue<TreeNode*> q; //FIFO
	TreeNode* temp =root;
	q.push(temp);
	while (!q.empty())
	{
		temp = q.front();
		q.pop();
		cout << temp->data << " ";
		if(temp->left!=NULL)
		  q.push(temp->left);
		if (temp->right!=NULL) 
		  q.push(temp->right);
	}
	cout << endl << "bfs traversal is finished" << endl;
}

void BinaryTree::printPre_order() {
	if (root == NULL) { cout << "No treenode can be traversed !" << endl; return; }

	stack<TreeNode*> s;
	TreeNode* temp;
	temp = root;
	s.push(temp);
	while (!s.empty()) {
		temp = s.top();
		s.pop();
		cout << temp->data << " ";
		if (temp->right != NULL)
			s.push(temp->right);
		if (temp->left != NULL)
			s.push(temp->left);
	}
	cout << "Pre-order traversal is finished !" << endl;


}