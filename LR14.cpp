#include<iostream>
#include<ctime>
#include<string>
using namespace std;

void sayhallo(string);
void sayhallo(string, int);
void holyday(int, int);
void hLine(int, char);
void vLine(int, char);

int main()
{
	/*sayhallo("Ivan");
	sayhallo("Vasyl");
	sayhallo("Bye");*/

	/*string name;
	int num;
	cout << "Enter name: "; getline(cin, name);
	cout << "Enter number of repit: "; cin >> num;
	sayhallo(name, num);*/

	/*char symbol;
	int day, month;
	cout << "Enter day and month of yors hollyday > ";
	cin >> day>>symbol>>month;
	holyday(day, month);*/

	/*int lengthHor, lengthVert;
	char symbol = '*';
	cout << "Enter the length of the horizontal line > "; cin >> lengthHor;
	hLine(lengthHor, symbol);
	cout << "\nEnter the length of the vertical line > "; cin >> lengthVert;
	vLine(lengthVert, symbol);*/

	//a)
	//**********
	//*******
	//*****

	/*char symbol = '*';
	hLine(10, symbol);
	hLine(7, symbol);
	hLine(5, symbol);*/

	//b)
	//********
	//*
	//*
	//*
	//*************
	//*
	//*
	//*
	//*******************
	char symbol = '*';
	hLine(8, symbol);
	vLine(3, symbol);
	hLine(13, symbol);
	vLine(3, symbol);
	hLine(19, symbol);

	system("pause");
	return 0;
}

void sayhallo(string name)
{
	cout << "Hello, " << name << "!\n";
}

void sayhallo(string name, int num)
{
	for (int i = 0; i < num; i++) {
		cout << "Hello, " << name << "!\n";
	}
}
void holyday(int day, int month)
{
	if (day == 7 && month == 1) {
		cout << "Rizdvo!\n";
	}
	else if (day == 27 && month == 2) {
		cout << "Birtday!\n";
	}
	else if (day == 8 && month == 3) {
		cout << "8 Bereznya!\n";
	}
}
void hLine(int length, char symbol)
{
	for (int i = 0; i < length; ++i) {
		cout << symbol << " ";
	}
	cout << endl;
}
void vLine(int length, char symbol)
{
	for (int i = 0; i < length; ++i) {
		cout << symbol << endl;
	}
}