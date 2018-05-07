#include <iostream>
#include <string>
#include<conio.h>

using namespace std;
int M_SIZE = 1;

struct Adress {
	string City;
	string Street;
	int number;
	string phoneNumber;
};
struct Contact {
	string Name;
	string Last_Name;
	int Date_of_Birth;
	int Month_of_Birth;
	Adress adress;
};

void inputContact(Contact * &, int &);
void printContact(const Contact &);
void printAll(Contact *, int &);
void DeleteContact(Contact *&, int &);
void SearchName(Contact *, int);
void SearchAdress(Contact *, int);
void SearchMonth(Contact *, int);
void DeletePhoneBook(Contact *, int &);

int main() {
	int realsize = 0, choice, choice1;
	Contact *PhoneBook = new Contact[M_SIZE];

	do {
		cout << "[1] - Add contact to Book\n[2] - Delete contact of Book\n[3] - See all contacts in PhoneBook\n[4] - Search contact\n";
		cout << "[5] - Delete PhoneBook\n[6] - Exit!" << endl;
		cout << "Your choice > "; cin >> choice;
		if (choice < 1 || choice > 6) {
			cout << "Error! Your choice again > "; cin >> choice;
		}
		system("cls");
		switch (choice) {
		case 1:
			inputContact(PhoneBook, realsize);
			break;
		case 2:
			DeleteContact(PhoneBook, realsize);
			break;
		case 3:
			printAll(PhoneBook, realsize);
			break;
		case 4:
			do {
				cout << "[1] - Search by name\n[2] - Search by adress\n[3] - Search by birth month\n[4] - Main menu\n";
				cout << "Your choice > "; cin >> choice1;
				switch (choice1) {
				case 1:
					SearchName(PhoneBook, realsize);
					break;
				case 2:
					SearchAdress(PhoneBook, realsize);
					break;
				case 3:
					SearchMonth(PhoneBook, realsize);
					break;
				}
			} while (choice1 != 4);
			system("cls");
			break;
		case 5:
			DeletePhoneBook(PhoneBook, realsize);
			break;
		case 6:
			return 0;
		}
	} while (choice != 6);

	system("pause");
	return 0;
}

void inputContact(Contact * &ArrContact, int &r_size) {
	if (r_size >= M_SIZE) {
		Contact * ArrRes = new Contact[M_SIZE + 10];
		for (int i = 0; i < r_size; ++i) {
			ArrRes[i] = ArrContact[i];
		}
		delete[]ArrContact;
		ArrContact = ArrRes;
		M_SIZE += 10;
	}
	++r_size;
	cout << "Enter name > "; cin >> ArrContact[r_size - 1].Name;
	cout << "Enter last name > "; cin >> ArrContact[r_size - 1].Last_Name;
	cout << "Enter date of birth (DD) > "; cin >> ArrContact[r_size - 1].Date_of_Birth;
	cout << "Enter month of birth (MM) > "; cin >> ArrContact[r_size - 1].Month_of_Birth;
	cout << "Enter city > "; cin >> ArrContact[r_size - 1].adress.City;
	cout << "Enter street > "; cin >> ArrContact[r_size - 1].adress.Street;
	cout << "Enter the house number (nn) > "; cin >> ArrContact[r_size - 1].adress.number;
	cout << "Enter the phone number (**********) > "; cin >> ArrContact[r_size - 1].adress.phoneNumber;
	_getch();
	system("cls");
}
void printContact(const Contact &contact) {
	cout << contact.Name << "\t" << contact.Last_Name << "\t" << contact.Date_of_Birth << "." << contact.Month_of_Birth << "\t" << contact.adress.City << "\t"
		<< contact.adress.Street << "\t" << contact.adress.number << "\t" << contact.adress.phoneNumber << endl;
}
void printAll(Contact *ArrContact, int &r_size) {
	for (int i = 0; i < r_size; ++i) {
		cout << "# " << i << "\t";
		printContact(ArrContact[i]);
	}
	_getch();
	system("cls");
}
void DeleteContact(Contact *& ArrContact, int &r_size) {
	printAll(ArrContact, r_size);
	int choise;
	cout << "Enter number of contact to delete > "; cin >> choise;
	if (choise < 0 || choise >= r_size) {
		cout << "Error!!! Enter number of contact to delete again > "; cin >> choise;
	}
	for (int i = choise; i < r_size; ++i) {
		ArrContact[i] = ArrContact[i + 1];
	}
	--r_size;
}
void SearchName(Contact *ArrContact, int r_size) {
	string name;
	cout << "Enter name or last name to search > "; cin >> name;
	for (int i = 0; i < r_size; ++i) {
		if (ArrContact[i].Name == name || ArrContact[i].Last_Name == name) {
			printContact(ArrContact[i]);
		}
	}
	_getch();
	system("cls");
}
void SearchAdress(Contact *ArrContact, int r_size) {
	string city, street;
	cout << "Enter city to search > "; cin >> city;
	for (int i = 0; i < r_size; ++i) {
		if (ArrContact[i].adress.City == city) {
			printContact(ArrContact[i]);
		}
	}
	_getch();
	system("cls");
}
void SearchMonth(Contact *ArrContact, int r_size) {
	int month;
	cout << "Enter month of birth to search > "; cin >> month;
	for (int i = 0; i < r_size; ++i) {
		if (ArrContact[i].Month_of_Birth == month) {
			printContact(ArrContact[i]);
		}
	}
	_getch();
	system("cls");
}
void DeletePhoneBook(Contact *ArrContact, int &r_size) {
	r_size = 0;
}