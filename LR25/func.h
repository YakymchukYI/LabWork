#pragma once
int **createM(int, int);
void fillM(int **, int, int);
void printM(int **, int, int);
void AddRow(int**&, int&, int);
void AddRowKey(int**&, int&, int, int);
void DelRow(int**&, int&, int, int);
void AddCol(int**&, int, int &);
void AddColKey(int**&, int, int &, int);
void DelCol(int**&, int, int &, int);
void deleteM(int **&, int, int);