#include<iostream>
#include<ctime>
using namespace std;

int sum_interval(int, int);
bool isSimple(int);
void isSimpleDiap(int, int);
int Max(int, int);
int Min(int, int);
int Date(int, int, int);
bool leapYear(int);

int main()
{
	/*int num_start = 0, num_end = 0;
	cout << "Vvedit' pochatok diapazonu > "; cin >> num_start;
	cout << "Vvedit' kinec' diapazonu > "; cin >> num_end;
	cout << "Suma v diapazoni > " << sum_interval(num_start,num_end) << endl;*/

	//int number;
	//cout << "Enter number > "; cin >> number;
	//if (isSimple(number)) {
	//	cout << "Proste!" << endl;
	//}
	//else {
	//	cout << "Ne proste!" << endl;
	//}
	//int num_start, num_end;
	//cout << "Vvedit' pochatok diapazonu > "; cin >> num_start;
	//cout << "Vvedit' kinec' diapazonu > "; cin >> num_end;
	//cout << "Diapazon prostih chisel: ";
	//isSimpleDiap(num_start, num_end);
	///*for (int i = num_start; i <= num_end; ++i) {
	//	if (isSimple(i)) {
	//		cout << i << " ";
	//	}
	//}*/
	//cout << endl;

	/*int num1, num2;
	cout << "Enter first number > "; cin >> num1;
	cout << "Enter second number > "; cin >> num2;
	cout << "Maximum: " << Max(num1, num2) << endl;
	cout << "Minimum: " << Min(num1, num2) << endl;
	int a, b, c;
	cout << "Enter a > "; cin >> a;
	cout << "Enter b > "; cin >> b;
	cout << "Enter c > "; cin >> c;
	int res = Min(a, b) + Max(b - a, c + 1) + Min(b*b + a, c*c*c);
	cout << "Resultat = " << res << endl;*/

	int day, month, year;
	char symbol;
	cout << "Enter the date (example 31.12.2018) > "; cin >> day >> symbol >> month >> symbol >> year;
	if (leapYear(year)) {
		cout << "Year is leapfrogging\n";
	}
	else {
		cout << "The year is not leapfrogging!\n";
	}
	cout << "Number of days passed since the beginning of the year: " << Date(day, month, year) << endl << endl;
	system("pause");
	return 0;
}
int sum_interval(int num_start, int num_end)
{
	int res = 0;
	for (int i = num_start; i <= num_end; ++i) {
		res += i;
	}
	return res;
}
bool isSimple(int number) {
	for (int i = 2; i <= sqrt(number); ++i) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}
void isSimpleDiap(int num_start, int num_end)
{
	for (int i = num_start; i <= num_end; ++i) {
		if (isSimple(i))
			cout << i << " ";
	}
}

//Написати функції для знаходження більшого з двох чисел та меншого з двох
//чисел(допоміжні задачі - функції max() та min()).Протестувати роботу функцій.
//Обчислити за допомогою функцій значення виразу : min(a, b) + max(b – a, c + 1) +
//min(b*b + a, c*c*c), де a, b, c – вводяться з клавіатури(основна задача - функція
//main()).

int Max(int num1, int num2)
{
	int max = num1 > num2 ? num1 : num2;
	return max;
}
int Min(int num1, int num2)
{
	int min = num1 < num2 ? num1 : num2;
	return min;
}

//Написати функцію, яка отримує  дату(день, місяць та рік) та повертає кількість днів
//що пройшли від початку року до даної вказаної дати.Протестувати роботу функції.

int Date(int day, int month, int year)
{
	const int SIZE = 12;
	int ArrayMonths[SIZE] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (leapYear(year)) ArrayMonths[1] += 1;
	int DaysPassed = 0;
	for (int i = 0; i < month - 1; ++i) {
		DaysPassed += ArrayMonths[i];
	}
	DaysPassed += day;
	return DaysPassed;
}
bool leapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0) return true;
	else return false;
}
