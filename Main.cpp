//yakov amoyal : 315177543
//chen haziza 319027892
#include "Tree.h"
void main()
{
	cout << "----------------------------------START---------------------------------" << endl;
	cout << "**************First Check*****************" << endl;
	cout << "first exemple (from the work) : " << endl;
	Tree first;
	first.MakeTree();
	if (first.Lbt())
	{
		cout << "The given Tree is Lbt." << endl;
	}
	else
	{
		cout << "The given Tree is not Lbt." << endl;
	}
	cout << "the Tree (print) : " << endl;
	first.PrintTree();
	cout << "**************Second Check*****************" << endl;
	cout << "Second exemple (Random) : " << endl;
	Tree Random;
	Random.CreateTree(rand() % 50);
	if (Random.Lbt())
	{
		cout << "The given Tree is Lbt." << endl;
	}
	else
	{
		cout << "The given Tree is not Lbt." << endl;
	}
	cout << "the random Tree (print) : " << endl;
	Random.PrintTree();
	cout << "----------------------------------END---------------------------------" << endl;
}