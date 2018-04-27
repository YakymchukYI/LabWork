#include<iostream>
#include<ctime>
using namespace std;

int *Create(int &);
void Print(const int *, int &);
int *Fill(int *, int &, int &, int &);
int* Add(int *, int &, int);
void AddPosition(int*&, int&, int, int);
void DelPosition(int*&, int&, int);

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

	/*int size, *A, lm, rm, el, key;
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
	AddPosition(A, size, el, key);
	Print(A, size);
	cout << "Vvedit' poziciyu yaku vidalyty > "; cin >> key;
	A = DelPosition(A, size, key);
	Print(A, size);*/

	int size = 20, *A, lm = -12, rm = 56;
	A = Create(size);
	Fill(A, size, lm, rm);
	cout << "\t\t\t\Start array!!!\n";
	Print(A, size);
	for (int i = 0; i < size; ++i) {
		if (A[i] < 0) {
			AddPosition(A, size, abs(A[i]), i+1);
			++i;
		}
	}
	cout << "\n\t\t\tAdd abs to array!!!\n";
	Print(A, size);
	for (int i = 0; i < size; ++i) {
		if (A[i] % 2 == 0 && A[i] != 0) {
			DelPosition(A, size, i+1);
			--i;
		}
		
	}
	cout << "\n\t\t\tDelete all binate elements!!!\n";
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
		A[i] = lm + rand() % rm;
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
void AddPosition(int*&A, int&size, int el, int key) {
	int *B = new int[++size];
	for (int i = 0; i < size; ++i) {
		if (i >= key) {
			B[i + 1] = A[i];
		}
		else {
			B[i] = A[i];
		}
	}
	B[key] = el;
	delete[]A;
	A = B;
}
void DelPosition(int*&A, int&size, int key) {
	int *B = new int[size - 1];
	for (int i = 0; i < size; ++i) {
		if (i >= key) {
			B[i - 1] = A[i];
		}
		else {
			B[i] = A[i];
		}
	}
	--size;
	delete[]A;
	A = B;
}