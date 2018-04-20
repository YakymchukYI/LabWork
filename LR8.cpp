#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	/*int a = 1, f = 1, n;
	cout << "Factorial yakogo chisla viznachity > ";
	cin >> n;
	do
	{
	f *= a;
	a++;
	} while (a <= n);
	cout << "Factorial chisla " << n << " = " << f << endl;*/

	/*const int P = 1234;
	int p, n = 3, i;
	float b = 10000, z;
	enum Menu { Balance = 1, Cash, Exit };
	do
	{
		cout << "Enter  password > ";
		cin >> p;
		if (p == P)
		{
			cout << "\nPress any key to see the menu.\n";
			break;
		}
		else if (n != 1)
		{
			cout << "Password incorrect try again!" << endl;
		}
		else
		{
			cout << "Login faild!" << endl;
			return 0;
		}
		--n;
	} while (n > 0);
	_getch();
	system("cls");
	do
	{
		cout << "[" << Menu::Balance << "] - Balance" << endl;
		cout << "[" << Menu::Cash << "] - Cash" << endl;
		cout << "[" << Menu::Exit << "] - Exit" << endl;
		cin >> i;
		switch (i)
		{
		case(Menu::Balance):
		{
			cout << "Your balance of funds = " << b << endl;
			_getch();
			system("cls");
			break;
		}
		case(Menu::Cash):
		{
			cout << "Enter the amount of money you want to withdraw > ";
			cin >> z;
			if (z <= b && z > 0)
			{
				cout << "You will receive " << z << " dolars.\n";
				b -= z;
			}
			else
			{
				cout << "You can not withdraw this amount of money!";
			}
			_getch();
			system("cls");
			break;
		}
		case(Menu::Exit):
		{
			cout << "Exit";
			_getch();
			system("cls");
			break;
		}
		default:
			cout << "Wrong operation!";
			break;
		}
	} while (i != Menu::Exit);*/

	int r1tic = 1, r2tic = 20, r3tic = 20, menuMarker = 0, routeMarker = 0;
	int r1ticB = 0, r2ticB = 0, r3ticB = 0;
	const double r1price = 125.50, r2price = 110.20, r3price = 80.30;
	double pay = 0, change = 0;
	enum Menu { StationMenu = 1, BuyTicket, Exit };
	enum Route { Kiev = 1, Lviv, Lutsk };
	do {
		system("cls");
		cout << "[" << Menu::StationMenu << "] - Station menu" << endl;
		cout << "[" << Menu::BuyTicket << "] - Buy ticket" << endl;
		cout << "[" << Menu::Exit << "] - Print tickets and Exit" << endl;
		cout << "Enter your choise > "; cin >> menuMarker;
		switch (menuMarker)
		{
		case(Menu::StationMenu): {
			cout << "\t~MENU~" << endl;
			cout << "Route\t\t" << "Number\t" << endl;
			cout << "[" << Route::Kiev << "] - Kiev" << "\t" << r1tic << endl;
			cout << "[" << Route::Lviv << "] - Lviv" << "\t" << r2tic <<  endl;
			cout << "[" << Route::Lutsk << "] - Lutsk" << "\t" << r3tic <<  endl;
			_getch();
			system("cls");
			break;
		}
		case(Menu::BuyTicket): {
			cout << "\t~MENU~" << endl;
			cout << "Route\t\t" << "Price" << endl;
			cout << "[" << Route::Kiev << "] - Kiev" << "\t" << r1price << endl;
			cout << "[" << Route::Lviv << "] - Lviv" << "\t" <<  r2price << endl;
			cout << "[" << Route::Lutsk << "] - Lutsk" << "\t" << r3price << endl;
			cout << "Choose your direction > "; cin >> routeMarker;
			if (routeMarker == Route::Kiev) {
				if (r1tic > 0) {
					cout << "The price of your ticket is " << r1price << " UAH. Pleas enter money > "; cin >> pay;
					if (pay < r1price) {
						cout << "You enter not enough money. Pleas enter money > "; cin >> pay;
					}
					change = pay - r1price;
					cout << "Your change is " << change << " UAH.\n";
					cout << "You buy one ticket to Kiev.\n";
					++r1ticB;
					--r1tic;
				}
				else {
					cout << "Not enough tickets!!!\n";
				}
			}
			else if (routeMarker == Route::Lviv) {
				if (r2tic > 0) {
					cout << "The price of your ticket is " << r2price << " UAH. Pleas enter money > "; cin >> pay;
					if (pay < r2price) {
						cout << "You enter not enough money. Pleas enter money > "; cin >> pay;
					}
					change = pay - r2price;
					cout << "Your change is " << change << " UAH.\n";
					cout << "You buy one ticket to Lviv.\n";
					++r2ticB;
					--r2tic;
				}
				else {
					cout << "Not enough tickets!!!\n";
				}
			}
			else if (routeMarker == Route::Lutsk) {
				if (r3tic > 0) {
					cout << "The price of your ticket is " << r3price << " UAH. Pleas enter money > "; cin >> pay;
					if (pay < r3price) {
						cout << "You enter not enough money. Pleas enter money > "; cin >> pay;
					}
					change = pay - r3price;
					cout << "Your change is " << change << " UAH.\n";
					cout << "You buy one ticket to Lutsk.\n";
					++r3ticB;
					--r3tic;
				}
				else {
					cout << "Not enough tickets!!!\n";
				}
			}
			_getch();
			system("cls");
			break;
		}
		}
	} while (menuMarker != Menu::Exit);
	if (menuMarker == Menu::Exit) {
		cout << "You buy " << r1ticB << " ticket(s) to Kiev.\n";
		cout << "You buy " << r2ticB << " ticket(s) to Lviv.\n";
		cout << "You buy " << r3ticB << " ticket(s) to Lutsk.\n";
	}
	_getch();
	system("pause");
	return 0;
}