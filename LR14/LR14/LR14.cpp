#include<iostream>
#include<ctime>
#include<string>
using namespace std;

<<<<<<< HEAD
void sayhallo(string);
void sayhallo(string, int);
void holyday(int, int);


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
	cout << "Enter day and month (Example 07.01) of yors hollyday > ";
	cin >> day >> symbol >> month;
	holyday(day, month);*/


	system("pause");
	return 0;
}

=======
>>>>>>> e28565c2cd7e469369e273efce7e1280cf079442
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
<<<<<<< HEAD
=======
}


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


	system("pause");
	return 0;
>>>>>>> e28565c2cd7e469369e273efce7e1280cf079442
}