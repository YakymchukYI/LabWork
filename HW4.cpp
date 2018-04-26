#include<iostream>
#include<ctime>
#include<iomanip>
#include<conio.h>
#include<Windows.h>

using namespace std;

int main() {
	srand(unsigned(time(0)));

	/*int numTest, counter = 0, counter1 = 0, num1, num2, num3, num4, choise, mnog = 0, dod = 0, vid = 0, mnog1 = 0, dil1 = 0, dod1 = 0, vid1 = 0;
	cout << "Vvedit' kil'kist' testiv > "; cin >> numTest;
	while (counter < numTest) {
		num1 = rand() % 9 + 1;
		num2 = rand() % 9 + 1;
		num3 = rand() % 30 + 1;
		num4 = rand() % 30 + 1;
		choise = rand() % 4 + 1;
		if (choise == 1) {
			mnog = num1*num2;
			cout << num1 << " * " << num2 << " = "; cin >> mnog1;
			if (mnog == mnog1) {
				++counter1;
				cout << "Virno!\n\n";
			}
			else {
				cout << "Ne virno!\n\n";
			}
			++counter;
		}
		else if (choise == 2) {
			mnog = num1*num2;
			cout << mnog << " / " << num1 << " = "; cin >> dil1;
			if (dil1 == num2) {
				++counter1;
				cout << "Virno!\n\n";
			}
			else {
				cout << "Ne virno!\n\n";
			}
			++counter;
		}
		else if (choise == 3) {
			dod = num3+num4;
			cout << num3 << " + " << num4 << " = "; cin >> dod1;
			if (dod1 == dod) {
				++counter1;
				cout << "Virno!\n\n";
			}
			else {
				cout << "Ne virno!\n\n";
			}
			++counter;
		}
		else {

			vid = num3 - num4;
			cout << num3 << " - " << num4 << " = "; cin >> vid1;
			if (vid1 == vid) {
				++counter1;
				cout << "Virno!\n\n";
			}
			else {
				cout << "Ne virno!\n\n";
			}
			++counter;
		}
	}
	cout << "\nKilkist' virnyh vidpovidey " << counter1 << " z " << numTest << endl << endl;
	double proc = double(counter1) / numTest * 100;
	cout << fixed << setprecision(2) << "Procent virnyh vidpovidey: " << proc << " %" << endl;*/

	/*int cubePlayer1, cubePlayer2, cubeCom1, cubeCom2, n, counter = 1, scoreCom = 0, scorePla = 0;
	cout << "Enter number of points to stop > "; cin >> n;
	system("cls");
	do
	{
		cout << "\t\tGame to " << n << endl << endl;
		cout << "Game " << counter << endl;
		cubeCom1 = rand() % 6 + 1;
		cubeCom2 = rand() % 6 + 1;
		cout << "Computer > " << cubeCom1 << " : " << cubeCom2 << endl;
		cout << "\nYour turn. Press any key to start!";
		_getch();
		cubePlayer1 = rand() % 6 + 1;
		cubePlayer2 = rand() % 6 + 1;
		cout << "\n\nPlayer > " << cubePlayer1 << " : " << cubePlayer2 << endl;
		if ((cubePlayer1 + cubePlayer2) > (cubeCom1 + cubeCom2)) {
			++scorePla;
			if (cubePlayer1 == cubePlayer2) {
				scorePla = scorePla + 2;
			}
		}
		else if ((cubePlayer1 + cubePlayer2) < (cubeCom1 + cubeCom2)) {
			++scoreCom;
			if (cubeCom1 == cubeCom2) {
				scoreCom = scoreCom + 2;
			}
		}
		++counter;
		cout << "\nComputer = " << scoreCom << " || Palayer = " << scorePla << endl;
		_getch();
		system("cls");
	} while (scoreCom < n && scorePla < n);
	if (scoreCom > scorePla) {
		cout << "Computer win!!!" << endl;
		cout << "\nComputer = " << scoreCom << " || Palayer = " << scorePla << endl;
	}
	else if (scoreCom < scorePla) {
		cout << "Player win!!!" << endl;
		cout << "\nComputer = " << scoreCom << " || Palayer = " << scorePla << endl;
	}
	else if (scoreCom == scorePla) {
		cout << "Draw!!!" << endl;
		cout << "\nComputer = " << scoreCom << " || Palayer = " << scorePla << endl;
	}*/

	/*int height;
	char symbol = '*';
	cout << "Enter height > "; cin >> height;
	for (int star = 1, space = height - 1; space >= 0; ++star, --space) {
		for (int i = 0; i < space; ++i) {
			cout << " ";
		}
		for (int j = 0; j < star; ++j) {
			cout << symbol;
		}
		cout << endl;
	}*/

	/*int height;
	char symbol = '*';
	cout << "Enter height > "; cin >> height;
	for (int star = 1, space = height - 1; space >= 0; star+=2, --space) {
		for (int i = 0; i < space; ++i) {
			cout << " ";
		}
		for (int j = 0; j < star; ++j) {
			cout << symbol;
		}
		cout << endl;
	}
	for (int star = 1, space = height - 1; space >= 0; star += 2, --space) {
		for (int i = 0; i < space; ++i) {
			cout << " ";
		}
		for (int j = 0; j < star; ++j) {
			if (j == 0 || j == star - 1 || star == 2 * height - 1) {
				cout << symbol;
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}*/
	
	/*int SIZE = 10;
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE - 1; ++j) {
			cout << i;
		}
		cout << endl;
	}*/

	/*int SIZE = 10;
	for (int i = 1; i < SIZE; ++i) {
		for (int j = 1; j < SIZE; ++j) {
			cout << i << " * " << j << " = " << i*j << endl;
		}
		_getch();
		system("cls");
	}*/

	/*int SIZE = 10;
	for (int i = 1; i <= SIZE; ++i) {
		for (int j = 1; j <= SIZE; ++j) {
			cout << i*j << "\t";
		}
		cout << endl;
	}*/

	/*int height, number;
	cout << "Enter height > "; cin >> height;
	cout << "Enter number > "; cin >> number;
	for (int i = 1; i <= height; ++i) {
		for (int j = 1; j <= number; ++j) {
			for (int k = 0; k < j - 1; ++k) {
				cout << " ";
			}
			cout << "*";
			cout << endl;
		}
		int tmp = number;
		for (int j = 1; j < number - 1; ++j, --tmp) {
			for (int k = tmp - 1; k > 1; --k) {
				cout << " ";
			}
			cout << "*";
			cout << endl;
		}
	}*/

	/*int width, height, thickness;
	cout << "Enter width > "; cin >> width;
	cout << "Enter height > "; cin >> height;
	cout << "Enter thickness > "; cin >> thickness;
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j) {
			if (j <= thickness - 1 || j >= width - thickness || i <= thickness - 1 || i >= height - thickness) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}*/

	int height;
	do {
		cout << "Enter height (max is 25) > "; cin >> height;
	} while (height > 25);
	for (int i = height; i >= 0; --i) {
		for (char j = 97; j <= char(97 + i); ++j) {
			cout << j;
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}