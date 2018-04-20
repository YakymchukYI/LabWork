#include<iostream>
#include<ctime>
using namespace std;

int *Create(int &);
void Print(const int *, int &);
int *Fill(int *, int &, int &, int &);
int* Add(int *, int &, int);
int* AddPosition(int*, int&, int, int);
int* DelPosition(int*, int&, int);

int main() {
	srand(unsigned(time(0)));

	/*int *i = new int(1), *f = new int(1), *n = new int;

	cout << "Factorial yakogo chisla viznachity > "; cin >> *n;
	for (*i; *i <= *n; ++ *i) {
	*f *= *i;
	}
	cout << "Factorial chisla !" << *n << " = " << *f << endl;
	delete i;
	delete f;
	delete n;*/

	/*int *A, size, *i = new int (0);
	cout << "Vvedit' rozmir masivu > "; cin >> size;
	A = new int[size];
	for (*i; *i < size; ++*i) {
	A[*i] = rand() % 10;
	cout << A[*i] << " ";
	}
	cout << endl;
	delete[]A;
	A = nullptr;*/

	int size, *A, lm, rm, el, key;
	cout << "Vvedit' rozmir masivu > ";
	cin >> size;
	A = Create(size);
	Print(A, size);
	cout << "Vvedit' pochatkovu mezhu zapovnenya > "; cin >> lm;
	cout << "Vvedit' kincevu mezhu zapovnenya > "; cin >> rm;
	Fill(A, size, lm, rm);
	Print(A, size);
	cout << "Vvedit' element yakiy hochete dodaty > "; cin >> el;
	A = Add(A, size, el);
	Print(A, size);
	cout << "Vvedit' element yakiy hochete dodaty > "; cin >> el;
	cout << "Vvedit' poziciyu yaku dodaty > "; cin >> key;
	A = AddPosition(A, size, el, key);
	Print(A, size);
	cout << "Vvedit' poziciyu yaku vidalyty > "; cin >> key;
	A = DelPosition(A, size, key);
	Print(A, size);

	system("pause");
	return 0;
}

int *Create(int & size) {
	int *A = new int [size] {0};
	return A;
}
int *Fill(int *A, int &size, int & lm, int & rm) {
	if (lm > rm) {
		int tmp = rm;
		rm = lm;
		lm = tmp;
	}
	for (int i = 0; i < size; ++i) {
		int a = rm - lm + 1;
		A[i] = rand() % a + lm;
	}return A;
}
void Print(const int *A, int &size) {
	int *i = new int(0);
	cout << "Array: ";
	if (A != nullptr)
	{
		for (*i; *i < size; ++ *i) {
			cout << A[*i] << " ";
		}
	}
	cout << endl;
	delete i;
}
int* Add(int*A, int &size, int el) {
	int *B = new int[++size];
	for (int i = 0; i < size - 1; ++i) {
		B[i] = A[i];
	}
	B[size - 1] = el;
	delete[]A;
	return B;
}
int* AddPosition(int*A, int&size, int el, int key) {
	int *B = new int[++size];
	for (int i = 0; i < key; ++i) {
		B[i] = A[i];
	}
	for (int i = key; i < size; ++i) {
		B[i + 1] = A[i];
	}
	B[key] = el;
	delete[]A;
	return B;
}
int* DelPosition(int*A, int&size, int key) {
	int *B = new int[--size];
	for (int i = 0; i < key; ++i) {
		B[i] = A[i];
	}
	for (int i = key; i < size; ++i) {
		B[i] = A[i + 1];
	}
	delete[]A;
	return B;
}