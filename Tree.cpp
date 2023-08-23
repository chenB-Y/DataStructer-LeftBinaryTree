#include "Tree.h"
void Tree::SetKey(int _key)
{
	this->Key = _key;
}
void Tree::SetRightTree(Tree* _tree)
{
	this->RightTree = _tree;
}
void Tree::SetLeftTree(Tree* _tree)
{
	this->LeftTree = _tree;
}
void Tree::CreateTree( int _amount)
{
	srand(time(NULL));
	if (_amount == 0)
	{
		return;
	}
	int Tmp;
	this->LeftTree = nullptr;
	this->RightTree = nullptr;
	if (this->Key == -858993460)
	{
		this->Key = rand() % 10;
		_amount -= 1;
	}
	if (_amount > 0)
	{
		Tmp = rand() % 2;
	}
	else
	{
		return;
	}
	if (Tmp != 0)
	{
		this->LeftTree = new Tree;
		this->LeftTree->LeftTree = nullptr;
		this->LeftTree->RightTree = nullptr;
		this->LeftTree->Key = rand() % 10;
		_amount -= 1;
		if (_amount > 0)
		{
			Tmp = rand() % 2;
		}
		else
		{
			return;
		}
		if (Tmp != 0)
		{

			this->LeftTree->CreateTree(_amount);
		}
	}
	if (_amount > 0)
	{
		Tmp = rand() % 3;

	}
	else
	{
		return;
	}
	if (Tmp != 0)
	{
		this->RightTree = new Tree;
		this->RightTree->LeftTree = nullptr;
		this->RightTree->RightTree = nullptr;
		this->RightTree->Key = rand() % 10;
		_amount -= 1;
		if (_amount > 0)
		{
			Tmp = rand() % 3;
		}
		else
		{
			return;
		}
		if (Tmp != 0)
		{
			this->RightTree->CreateTree(_amount);
		}
	}
	return;
}
bool Tree::Lbt()
{
	bool answer;
	if (this == nullptr || this->Key == -858993460)
	{
		return true;
	}
	if ((this->LeftTree == nullptr && this->RightTree == nullptr))
	{
		return true;
	}
	answer = this->LeftTree->Lbt() && this->RightTree->Lbt();
	if (!answer)
	{
		return answer;
	}
	if (this->LeftTree != nullptr)
	{
		return true;
	}
	return false;
}
void Tree::PrintTree()
{
	if (this == nullptr || this->Key == NULL)
	{
		return;
	} 
	cout << "                      ";
	cout << this->Key << endl;
	this->LeftTree->PrintTree();;
	this->RightTree->PrintTree();
}
void Tree::MakeTree()
{
	this->Key = 10;
	this->LeftTree = new Tree;
	this->LeftTree->RightTree = nullptr;
	this->LeftTree->LeftTree = nullptr;
	this->LeftTree->Key = 3;
	this->LeftTree->LeftTree = new Tree;;
	this->LeftTree->LeftTree->LeftTree = nullptr;
	this->LeftTree->LeftTree->RightTree = nullptr;
	this->LeftTree->LeftTree->Key = 2;
	this->LeftTree->LeftTree->LeftTree = new Tree;;
	this->LeftTree->LeftTree->LeftTree->LeftTree = nullptr;
	this->LeftTree->LeftTree->LeftTree->RightTree = nullptr;
	this->LeftTree->LeftTree->LeftTree->Key = 1;
	this->RightTree= new Tree;;
	this->RightTree->LeftTree = nullptr;
	this->RightTree->RightTree = nullptr;
	this->RightTree->Key = 6;
	this->RightTree->LeftTree = new Tree;
	this->RightTree->LeftTree->LeftTree = nullptr;
	this->RightTree->LeftTree->RightTree = nullptr;
	this->RightTree->LeftTree->Key = 4;
	this->RightTree->LeftTree->LeftTree = new Tree;
	this->RightTree->LeftTree->LeftTree->LeftTree = nullptr;
	this->RightTree->LeftTree->LeftTree->RightTree = nullptr;
	this->RightTree->LeftTree->LeftTree->Key = 3;
	this->RightTree->LeftTree->LeftTree->LeftTree = new Tree;
	this->RightTree->LeftTree->LeftTree->LeftTree->LeftTree = nullptr;
	this->RightTree->LeftTree->LeftTree->LeftTree->RightTree = nullptr;
	this->RightTree->LeftTree->LeftTree->LeftTree->Key = 1;
	this->RightTree->LeftTree->LeftTree->RightTree = new Tree;
	this->RightTree->LeftTree->LeftTree->RightTree->LeftTree = nullptr;
	this->RightTree->LeftTree->LeftTree->RightTree->RightTree = nullptr;
	this->RightTree->LeftTree->LeftTree->RightTree->Key = 1;
	this->RightTree->RightTree = new Tree;
	this->RightTree->RightTree->LeftTree = nullptr;
	this->RightTree->RightTree->RightTree = nullptr;
	this->RightTree->RightTree->Key = 1;
}