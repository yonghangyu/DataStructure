#include"Tree.h"
#include<vector>
// test for binarytree class
void main() {
	BinaryTree btree;
	vector<int> insertData = {5,2,6,4,8,1,0,14,9,7};
	int length = insertData.size();
	for (int i = 0; i < length;i++) {
		btree.Insert(insertData[i]);
	}
	cout << "Tree size is :" << btree.size() << endl;
	cout << "Looking up..." << endl;
	btree.look_up(7);
	cout << "BFS..." << endl;
	btree.printBFS();
	cout << "Pre-order..." << endl;
	btree.printPre_order();
}