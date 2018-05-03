#include<iostream>
#include<ctime>
using namespace std;

int **createM(int rows, int cols) {
	int **M = new int *[rows];
	for (int i = 0; i < rows; ++i) {
		M[i] = new int[cols];
	}
	return M;
}
void fillM(int **M, int rows, int cols) {
	srand(unsigned(time(0)));
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			M[i][j] = rand() % 10;
		}
	}
}
void printM(int **M, int rows, int cols) {
	if (M != nullptr) {
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j) {
				cout << M[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "\nM is nullptr.\n" << endl;
		return;
	}
}
void deleteM(int **&M, int rows, int cols) {
	for (int i = 0; i < rows; ++i) {
		delete[]M[i];
	}
	delete[]M;
	M = nullptr;
}
void AddRow(int**&M, int&rows, int cols) {
	srand(unsigned(time(0)));
	int **tmp = new int*[rows + 1];
	for (int i = 0; i < rows; ++i) {
		tmp[i] = M[i];
	}
	++rows;
	tmp[rows - 1] = new int[cols];
	for (int j = 0; j < cols; ++j) {
		tmp[rows - 1][j] = rand() % 10;
	}
	delete[]M;
	M = tmp;
}
void AddRowKey(int**&M, int&rows, int cols, int key) {
	srand(unsigned(time(0)));
	int **tmp = new int*[rows + 1];
	for (int i = 0; i < key; ++i) {
		tmp[i] = M[i];
	}
	++rows;
	for (int j = key + 1; j < rows; ++j) {
		tmp[j] = M[j-1];
	}
	tmp[key] = new int[cols];
	for (int k = 0; k < cols; ++k) {
		tmp[key][k] = rand() % 10;
	}
	delete[]M;
	M = tmp;
}
void DelRow(int**&M, int&rows, int cols, int key) {
	if (key >= 0 && key < rows) {
		delete[]M[key];
		for (int i = key; i < rows - 1; ++i) {
			M[i] = M[i + 1];
		}
		--rows;
	}
	else {
		cout << "\nWrong key!\n";
	}
}
void AddCol(int**&M, int rows, int &cols) {
	srand(unsigned(time(0)));
	int *tmp;
	for (int i = 0; i < rows; ++i) {
		tmp = new int[cols + 1];
		for (int j = 0; j < cols; ++j) {
			tmp[j] = M[i][j];
		}
		tmp[cols] = rand() % 10;
		delete[]M[i];
		M[i] = tmp;
	}
	++cols;
}
void AddColKey(int**&M, int rows, int &cols, int key) {
	srand(unsigned(time(0)));
	for (int i = 0; i < rows; ++i) {
	int *tmp = new int[cols + 1];
		for (int j = 0; j < key; ++j) {
			tmp[j] = M[i][j];
		}
		for (int j = key; j < cols + 1; ++j) {
			tmp[j] = M[i][j - 1];
		}
		tmp[key] = rand() % 10;
		delete[]M[i];
		M[i] = tmp;
	}
	++cols;
}
void DelCol(int**&M, int rows, int &cols, int key) {
	srand(unsigned(time(0)));
	if (key >= 0 && key < cols) {
		for (int i = 0; i < rows; ++i) {
			for (int j = key; j < cols - 1; ++j) {
				M[i][j] = M[i][j + 1];
			}
		}
		--cols;
	}
	else {
		cout << "\nWrong key!\n";
	}
}
