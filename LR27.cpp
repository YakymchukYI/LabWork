#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

struct Room
{
	int width;
	int length;
	string side;
};
void InputRoom(Room & r);
void ShowRoom(const Room & r);
int S(const Room & r);
const int LargestRoom(const Room & r1, const Room & r2);
//
struct Drib
{
	int ch;
	int zn;
};
void InputDrib(Drib & dr);
void PrintDrib(const Drib & dr);
Drib AddDrib(const Drib & dr1, const Drib & dr2);
Drib MinusDrib(const Drib & dr1, const Drib & dr2);
Drib MnogDrib(const Drib & dr1, const Drib & dr2);
Drib DilDrib(const Drib & dr1, const Drib & dr2);
Drib ScorDrib(Drib & dr);
int main()
{
	/*Room r1, r2;
	cout << "Enter room #1 parameters: " << endl;
	InputRoom(r1);
	cout << "Room #1 parameters: " << endl;
	ShowRoom(r1);
	cout << "Enter room #2 parameters: " << endl;
	InputRoom(r2);
	cout << "Room #2 parameters: " << endl;
	ShowRoom(r2);
	int l = LargestRoom(r1, r2);
	if (l == 0) { cout << "\nroom #1 = room #2" << endl; }
	else if (l > 0){ cout << "\nroom #1 > room #2" << endl; }
	else if (l < 0) { cout << "\nroom #1 < room #2" << endl; }*/

	Drib dr1, dr2, res, resScor;
	cout << "Enter drib #1 parameters: " << endl;
	InputDrib(dr1);
	cout << "Drib #1 = ";
	PrintDrib(dr1);
	cout << "Drib #1 scorocheniy = ";
	resScor = ScorDrib(dr1);
	PrintDrib(resScor);
	cout << "Enter drib #2 parameters: " << endl;
	InputDrib(dr2);
	cout << "Drib #2 = ";
	PrintDrib(dr2);
	cout << "Drib #2 scorocheniy = ";
	resScor = ScorDrib(dr2);
	PrintDrib(resScor);
	int menu;
	do {
		cout << "\n0. Dodavanya\n1. Vidnimanya\n2. Mnogenya\n3. Dilenya\n4. Exit\n\n";
		cout << "Your choise > "; cin >> menu;
		switch (menu)
		{
		case 0: { cout << "Drib #1 + Drib #2 = "; res = AddDrib(dr1, dr2); resScor = ScorDrib(res); PrintDrib(resScor); }
				break;
		case 1: { cout << "Drib #1 - Drib #2 = "; res = MinusDrib(dr1, dr2); resScor = ScorDrib(res); PrintDrib(resScor); }
				break;
		case 2: { cout << "Drib #1 * Drib #2 = "; res = MnogDrib(dr1, dr2); resScor = ScorDrib(res); PrintDrib(resScor); }
				break;
		case 3: { cout << "Drib #1 / Drib #2 = "; res = DilDrib(dr1, dr2); resScor = ScorDrib(res); PrintDrib(resScor); }
				break;
		}
	} while (menu != 4);

	system("pause");
	return 0;
}

void InputRoom(Room & r) {
	cout << "\nInput width of room > ";
	cin >> r.width;
	cout << "Input length of room > ";
	cin >> r.length;
	cout << "Input side (North, South, West, East) : ";
	cin >> r.side;
}
void ShowRoom(const Room & r) {
	cout << "Width = " << r.width << endl;
	cout << "Length = " << r.length << endl;
	cout << "Side = " << r.side << endl;
}
int S(const Room & r) {
	return r.length*r.width;
}
const int LargestRoom(const Room & r1, const Room & r2) {
	int Sr1 = S(r1);
	int Sr2 = S(r2);
	if (Sr1 == Sr2) { return 0; }
	else if (Sr1 > Sr2) { return 1; }
	else if (Sr1 < Sr2) { return -1; }
}

void InputDrib(Drib & dr) {
	cout << "Enter ch > "; cin >> dr.ch;
	cout << "Enter zn > "; cin >> dr.zn;
	if (dr.zn == 0) {
		cout << "Wrong zn!!!\n";
		do {
			cout << "Enter zn > "; cin >> dr.zn;
		} while (dr.zn == 0);
	}
}
void PrintDrib(const Drib & dr) {
	cout << dr.ch << "/" << dr.zn << endl;
}
Drib AddDrib(const Drib & dr1, const Drib & dr2) {
	Drib res{ dr1.ch * dr2.zn + dr2.ch * dr1.zn, dr1.zn * dr2.zn };
	return res;
}
Drib MinusDrib(const Drib & dr1, const Drib & dr2) {
	Drib res{ dr1.ch * dr2.zn - dr2.ch * dr1.zn, dr1.zn * dr2.zn };
	return res;
}
Drib MnogDrib(const Drib & dr1, const Drib & dr2) {
	Drib res{ dr1.ch * dr2.ch, dr1.zn * dr2.zn };
	return res;
}
Drib DilDrib(const Drib & dr1, const Drib & dr2) {
	Drib res{ dr1.ch * dr2.zn, dr1.zn * dr2.ch };
	return res;
}
Drib ScorDrib(Drib & dr) {
	Drib res;
	for (int i = dr.zn*dr.ch; i > 1; --i) {
		if ((dr.zn%i == 0) && (dr.ch%i == 0)) {
			res = { dr.ch /= i,dr.zn /= i };
		}
		else
		{
			res = { dr.ch, dr.zn };
		}
	}return res;
}