#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main()
{
	const int ROWS = 5, COLS = 6;
	int M[ROWS][COLS], elem = 0;
	for (int i = 0; i < COLS; ++i) {
		for (int j = 0; j < ROWS; ++j) {
			M[j][i] = elem;
			++elem;
		}
	}
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j) {
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}

	/*const int ROWS = 5, COLS = 6;
	int M[ROWS][COLS];
	for (int i = 0; i < ROWS; ++i) {
	for (int j = 0; j < COLS; ++j) {
	if ((i+j) % 2 == 0) {
	M[i][j] = 1;
	}
	else {
	M[i][j] = 0;
	}
	}
	}
	for (int i = 0; i < ROWS; ++i) {
	for (int j = 0; j < COLS; ++j) {
	cout << M[i][j] << " ";
	}
	cout << endl;
	}*/

	/*const int YEARS = 10, MONTH = 12;
	int M[YEARS][MONTH], S[YEARS];
	int max = 0, min = 100, max_y = 0, min_y = 0;
	srand(time(0));
	for (int y = 0; y < YEARS; ++y) {
	for (int m = 0; m < MONTH; ++m) {
	M[y][m] = rand() % 10;
	cout << M[y][m] << " ";
	}
	cout << endl;
	}
	cout << endl;
	for (int y = 0; y < YEARS; ++y) {
	int sum = 0;
	for (int m = 0; m < MONTH; ++m) {
	sum += M[y][m];
	}
	S[y] = sum;
	if (sum > max) {
	max = sum;
	max_y = y;
	}
	else if (sum < min) {
	min = sum;
	min_y = y;
	}
	cout << "Suma opadiv u " << y+2000 << " roci " << S[y] << endl;
	}
	cout << "\nMaksymalne znachenya opadiv " << max << " u " << max_y+2000 << " roci." << endl;
	cout << "Minimalne znachenya opadiv " << min << " u " << min_y+2000 << " roci." << endl << endl;*/

	/*const int NUMBER_T = 3;
	string team[NUMBER_T]{ "Dynamo", "Veres", "Karpaty" };
	char symbol;
	int Games[NUMBER_T][NUMBER_T]{};
	for (int i = 0; i < NUMBER_T; ++i) {
	for (int j = i + 1; j < NUMBER_T; ++j) {
	cout << team[i] << " - " << team[j] << " ";
	cin >> Games[i][j] >> symbol >> Games[j][i];
	}
	}
	cout << endl;
	for (int i = 0; i < NUMBER_T; ++i) {
	int sum_tg = 0;
	cout << team[i] << "\t";
	for (int j = 0; j < NUMBER_T; ++j) {
	cout << Games[i][j] << " ";
	sum_tg += Games[i][j];
	}
	cout << "\tGoliv: " << sum_tg << endl;
	}
	cout << endl;
	for (int i = 0; i < NUMBER_T; ++i) {
	int win = 0, draw = 0, loose = 0;
	cout << team[i];
	for (int j = 0; j < NUMBER_T; ++j) {
	if (i == j) {
	continue;
	}
	if (Games[i][j] > Games[j][i]) {
	++win;
	}
	if (Games[i][j] < Games[j][i]) {
	++loose;
	}
	if (Games[i][j] == Games[j][i]) {
	++draw;
	}
	}
	cout << "\tPeremog: " << win << endl;
	cout << "\tPorazok: " << loose << endl;
	cout << "\tNichiih: " << draw << endl;
	}*/

	system("pause");
	return 0;
}