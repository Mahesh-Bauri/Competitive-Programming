#include<iostream>
using namespace std;


class BinaryTreeNode {

public:
	int data;
	BinaryTreeNode *left;
	BinaryTreeNode *right;


public:
	BinaryTreeNode(int data) {
		this->data = data;
		left = NULL;
		right = NULL;

	}


};


int main() {

	BinaryTreeNode* node = new BinaryTreeNode(5);

	cout << node->data;

}