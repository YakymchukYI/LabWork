#include<iostream>
#include<ctime>
#include<string>
#include<fstream>

using namespace std;

void wrightBin(string fname, double A[], double size);
void readBin(string fname);
void changeNegToABS(string fname);

int main() {
	const int SIZE = 7;
	srand(unsigned(time(0)));
	double A[SIZE];
	string fname = "file.dat";
	for (int i = 0; i < SIZE; ++i) {
		A[i] = rand() % 10 - 3.5;
	}
	cout << "Array: ";
	for (int i = 0; i < SIZE; ++i) {
		cout << A[i] << " ";
	}
	cout << endl;
	wrightBin(fname, A, SIZE);
	readBin(fname);
	changeNegToABS(fname);
	readBin(fname);

	cout << endl;
	system("pause");
	return 0;
}

void wrightBin(string fname, double A[], double size) {
	ofstream fbin("file.dat", ios::out | ios::binary);
	if (!fbin) {
		cout << "File or directory not exist!\n";
		return;
	}
	fbin.write((char *)(A), sizeof(double) * size);
	fbin.close();
}
void readBin(string fname) {
	ifstream fbin("file.dat", ios::out | ios::binary);
	double elem;
	if (!fbin) {
		cout << "File or directory not exist!\n";
		return;
	}
	cout << "\nArray from file.dat: ";
	while (fbin.read((char *)(&elem), sizeof(double))) {
		cout << elem << " ";
	}
	fbin.close();
}
void changeNegToABS(string fname) {
	fstream ibin;
	ibin.open("file.dat",  ios::binary| ios::in | ios::out);
	if (!ibin) {
		cout << "File or directory not exist!\n";
		return;
	}
	ibin.seekg(0, ios::end);
	streamsize sizeBytes = ibin.tellg();
	int sizeB = sizeBytes / sizeof(double);
	double *B = new double[sizeB];
	double elem;
	ibin.seekp(0);
	for (int i = 0; i < sizeB; ++i) {
		ibin.read((char *)(&elem), sizeof(double));
		if (elem < 0) {
			elem *= -1;
			ibin.seekp(i * sizeof(double));
			ibin.write((char *)&elem, sizeof(double));
		}
		ibin.seekg((i + 1) * sizeof(double));
	}
}
