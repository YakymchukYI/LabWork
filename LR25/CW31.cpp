#include<iostream>
#include<ctime>
#include"func.h"

using namespace std;

int main()
{
	/*int a, b, sum = 0, dob = 1;
	cout << "Enter a > "; cin >> a;
	cout << "Enter b > "; cin >> b;
	int *pa = &a, *pb = &b;
	int **pa2 = &pa, **pb2 = &pb;
	sum = **pa2 + **pb2;
	dob = **pa2 * **pb2;
	cout << "Sum = " << sum << endl;
	cout << "Dob = " << dob << endl;*/

	int rows, cols, key;
	cout << "Enter rows > "; cin >> rows;
	cout << "Enter cols > "; cin >> cols;
	int **M = createM(rows, cols);
	fillM(M, rows, cols);
	printM(M, rows, cols);
	cout << "\n\nAdd row!!!\n";
	AddRow(M, rows, cols);
	printM(M, rows, cols);
	cout << "\n\nDelete row!!!\n";
	cout << "Enter ind row to delete > "; cin >> key;
	DelRow(M, rows, cols, key);
	printM(M, rows, cols);
	cout << "\n\nAdd col!!!\n";
	AddCol(M, rows, cols);
	printM(M, rows, cols);
	cout << "\n\nAdd row key!\n";
	cout << "Enter ind row to add > "; cin >> key;
	AddRowKey(M, rows, cols, key);
	printM(M, rows, cols);
	cout << "\n\nAdd col key!\n";
	cout << "Enter ind col to add > "; cin >> key;
	AddColKey(M, rows, cols, key);
	printM(M, rows, cols);
	cout << "\n\nDelete col!!!\n";
	cout << "Enter ind col to delete > "; cin >> key;
	DelCol(M, rows, cols, key);
	printM(M, rows, cols);

	deleteM(M, rows, cols);
	printM(M, rows, cols);
	system("pause");
	return 0;
}