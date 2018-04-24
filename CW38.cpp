#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void wrightFile(string);
void appToFile(string);
void printFromFile(string);
void printFromFile1(string);
double sumMarkInFile(string);
void bestStudentsMark(string);
int main() {
	/*int a = 27;
	ofstream f;
	f.open("my.txt");
	f << "My name is Yaroslav, I am " << a << " years old!" << endl;*/

	string filename;
	/*cout << "Enter file name to create > "; getline(cin, filename);
	wrightFile(filename);*/

	/*cout << "Enter file name to add > "; getline(cin, filename);
	appToFile(filename);*/

	/*cout << "Enter file name to sea > "; getline(cin, filename);
	cout << "Your text in file is: " << endl;
	printFromFile(filename);*/

	cout << "Enter file name to sea > "; getline(cin, filename);
	cout << "Your text in file is: " << endl;
	printFromFile1(filename);
	double seredne;
	seredne = sumMarkInFile(filename);
	cout << "Serednya ocinka = " << seredne << endl;
	cout << "\nBest students: \n";
	bestStudentsMark(filename);



	system("pause");
	return 0;
}

void wrightFile(string filename) {
	string text;
	ofstream f;
	int numBreak = 0;
	f.open(filename);
	if (!f.is_open()) {
		cout << "File or directory not exist!" << endl;
		return;
	}
	do {
		cout << "Enter text >> ";
		getline(cin, text);
		if (text == "*")
			break;
		f << text << endl;
		
	} while (true);
}

void appToFile(string filename) {
	string text;
	ofstream f;
	int numBreak = 0;
	f.open(filename, ios::app);
	if (!f.is_open()) {
		cout << "File or directory not exist!" << endl;
		return;
	}
	do {
		cout << "Enter text >> ";
		getline(cin, text);
		if (text == "*")
			break;
		f << text << endl;

	} while (true);
}

void printFromFile(string filename) {
	string text;
	ifstream f(filename);
	if (!f) {
		cout << "File or directory not exist!" << endl;
		return;
	}
	while (getline(f, text)) {
		cout << text << endl;
	}
}
void printFromFile1(string filename) {
	string soname, name;
	int mark;
	ifstream f(filename);
	if (!f) {
		cout << "File or directory not exist!" << endl;
		return;
	}
	while (f >> name >> soname >> mark) {
		cout << name << " " << soname << " " << mark << endl;
	}
}
double sumMarkInFile(string filename) {
	string soname, name;
	int mark, i = 0;
	double seredne, sum = 0;
	ifstream f(filename);
	if (!f) {
		cout << "File or directory not exist!" << endl;
		return -1;
	}
	while (f >> name >> soname >> mark) {
		sum+=mark;
		++i;
	}
	seredne = sum / i;
	return seredne;
}
void bestStudentsMark(string filename) {
	string soname, name;
	int mark, counter = 0;
	ifstream f(filename);
	if (!f) {
		cout << "File or directory not exist!" << endl;
		return;
	}
	while (f >> name >> soname >> mark) {
		if (mark > 9) {
			cout << name << " " << soname << " " << mark << endl;
			++counter;
		}
	}
	cout << "\nNumber of excellent students in a group: " << counter << endl;
}
