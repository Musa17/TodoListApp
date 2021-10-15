// TodoApp (console).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main()
{
	const int maxList = 20;
	int menu, nothing = 0;
	char confirm;
	string todo, todos[maxList] = {};

	for (int i = 0; i < maxList; i++)
	{
		todos[i] = "";
	}

	system("cls");
	cout << "********************************" << endl;
	cout << "|                              |" << endl;
	cout << "|        ANTONIO MUSULIN       |" << endl;
	cout << "|           TODO APP           |" << endl;
	cout << "|             FESB             |" << endl;
	cout << "|                              |" << endl;
	cout << "********************************" << endl;
	cout << endl;

	cout << "ToDo List\n";
	cout << "================================" << endl;
	cout << "1. Add To Do item" << endl;
	cout << "2. View list" << endl;
	cout << "3. Exit" << endl;
	cout << "================================" << endl;

	cout << "Select option: ";
	cin >> menu;
	cout << "================================" << endl;
	system("cls");

	switch (menu)
	{
	case 1:
		cout << "Enter your new To Do item (Press enter to save): \n";
		cin >> todo;

		cout << "\n Save ? (Y/N): ";
		cin >> confirm;

		if (confirm == 'y' || confirm == 'Y')
		{
			for (int i = 0; i < maxList; i++)
			{
				if (todos[i] == "")
				{
					todos[i] = todo;
					break;
				}
			}
		}

		break;
	case 2:

	case 3:

	default:
		break;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
