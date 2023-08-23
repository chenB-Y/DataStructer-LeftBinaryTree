#pragma once
#include<iostream>
#include <time.h>
using namespace std;
class Tree
{
private:
	int Key;
	Tree* RightTree;
	Tree* LeftTree;
public:
	void SetKey(int _key);
	void SetRightTree(Tree* _tree);
	void SetLeftTree(Tree* _tree);
	void CreateTree( int _amount);
	bool Lbt();
	void PrintTree();
	void MakeTree();
};

