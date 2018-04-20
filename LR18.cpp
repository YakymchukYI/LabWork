#include<iostream>
#include<ctime>
#include<string>

using namespace std;

template<typename Type> void inputArr(Type A[], int SIZE);
template<typename Type> void printArr(Type A[], int SIZE);
template<typename Type> void mixingArrEl(Type A[], int SIZE);
template<typename Type> void sortBubble(Type A[], int SIZE);

#define factorial(num,res) res = 1;\//Macros
for (int i = 1; i<=num; ++i)\
	res *=i;

int main()
{
	srand(unsigned(time(0)));

	/*const int SIZE = 4;
	double A[SIZE];
	inputArr(A, SIZE);
	cout << "\nArray: ";
	printArr(A, SIZE);
	mixingArrEl(A, SIZE);
	cout << " \nMixing array: ";
	printArr(A, SIZE);
	sortBubble(A, SIZE);
	cout << "\nSort bubble array: ";
	printArr(A, SIZE);*/

	int num;
	int factorial;
	cout << "Enter number > ";
	cin >> num;
	factorial(num, factorial);
	cout << "Factorial number " << num << " = " << factorial << endl;

	system("pause");
	return 0;
}


template<typename Type> void inputArr (Type A[], int SIZE) {//Filing array
	for (int i = 0; i < SIZE; ++i) {
		cout << "Enter " << i << " array element > "; cin >> A[i];
	}
}
template<typename Type> void printArr (Type A[], int SIZE) {//Print array
	for (int i = 0; i < SIZE; ++i) {
		cout << A[i] << " ";
	}
	cout << endl;
}
template<typename Type> void mixingArrEl (Type A[], int SIZE) {//Mixing element in array
	Type tmp;
	int num1 = 0, num2 = 0;
	for (int i = 0; i < SIZE; ++i) {
		num1 = rand() % SIZE;
		num2 = rand() % SIZE;
		tmp = A[num1];
		A[num1] = A[num2];
		A[num2] = tmp;
	}
}
template<typename Type> void sortBubble (Type A[], int SIZE) {//Sort bubble
	for (int step = 0; step < SIZE - 1; ++step) {
		for (int i = SIZE - 1; i > step; --i) {
			if (A[i] < A[i - 1]) {
				Type tmp = A[i];
				A[i] = A[i - 1];
				A[i - 1] = tmp;
			}
		}
	}
}