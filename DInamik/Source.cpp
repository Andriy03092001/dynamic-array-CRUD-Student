#include<iostream>
#include<string>
using namespace std;

int sizeGroup = 0;//2
string *group = new string[sizeGroup];//Mark,Vadim

void addNewStudent(string name) {//Sasha
	string* temp = new string[sizeGroup + 1];
	for (int i = 0; i < sizeGroup; i++)
	{
		temp[i] = group[i];
	}
	//0 - Mark, 1 - Vadim, 2 - Sasha
	temp[sizeGroup] = name;
	sizeGroup++;

	group = new string[sizeGroup];// Виділили память для Саши
	for (int i = 0; i < sizeGroup; i++)
	{
		group[i] = temp[i];
	}
	delete[]temp;
}

void showGroup() {
	for (int i = 0; i < sizeGroup; i++)
	{
		cout << i + 1 << ". " << group[i] << endl;
	}
}


int main() {
	//int* ptrValue = new int(23);
	//cout << "Value: " << *ptrValue << endl;
	//delete ptrValue;
	//string students[100] = {"Mark"};

	int action = 0;
	do
	{
		cout << "1. Add new student" << endl;
		cout << "2. Show all student" << endl;
		cout << "3. Exit" << endl;
		cout << endl;
		cout << "Select action ->_";
		cin >> action;
		switch (action)
		{
		
			case 1: {
				string tempName = "";
				cout << "Enter name for new student: ";
				cin >> tempName;
				addNewStudent(tempName);
			}break;
		
			case 2: {
				showGroup();
			}break;
		
			case 3: {
				cout << "Good bye" << endl;
			}break;
		}

	} while (action != 3);
	


	return 0;
}