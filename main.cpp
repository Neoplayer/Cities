#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string A[29][15] = { 
	{ "�����������", "���������", "���������", "�����", "�����", "�������", "���������", "������", "������", "�������", "�����", "�����", "�����", "�����", "�������" },
	{ "������", "����", "��������", "������", "���������", "��������", "�������", "������", "����", "������������", "��������", "��������", "��������", "�����", "������" },
	{ "�������", "������", "���������", "����", "�������", "�������", "�������", "�������", "�����������", "�����������", "���������", "�������", "������", "������", "������" },
	{ "�����", "�������", "�������", "����", "��������", "�������", "��������", "�����", "�����-�������", "��������", "�����", "������", "����", "������", "��������" },
	{ "������", "������", "�������", "����������", "����������", "�������", "������", "�����", "�����", "�����������", "������", "�����", "����������", "�������", "������" },
	{ "������������", "���������", "���������", "��������", "�������", "����", "�������", "��������", "��������", "������", "������ ��������"},
	{ "������������", "������", "�������", "������", "�������", "����-��-����", "���������"},
	{ "���������", "�����������", "��������", "������", "���������", "��������", "���������", "�������", "��������", "�����", "��������", "��������", "��������", "������", "�������" },
	{ "�����", "�������", "���������", "������", "������", "���������", "�����������", "�������", "�������", "���������", "���������", "��", "�������", "�������", "�������" },
	{ "����", "������������", "������-���"},
	{ "������", "����", "��������", "�����", "�����������", "������", "�������", "������", "���������", "��������", "����", "�������", "�������", "�������", "����������" },
	{ "��� ����", "���-�����", "���-�������", "�������", "�����", "�����������", "���������", "�����", "������", "������", "���-��������", "�������", "����", "�����", "����������" },
	{ "�������", "������", "��������", "���������", "���������", "������", "�����", "�����", "��������", "������", "��������", "������", "������", "������", "������" },
	{ "��������", "���������� �����", "����", "�������", "��������", "������ ��������", "�����������", "��������", "�������� �������", "�����������", "��������", "���-����", "����� ������", "�����", "����������" },
	{ "������", "�������", "����", "���", "��������", "����", "������", "����", "������"},
	{ "�������", "�����", "������-����", "�����", "�����", "�����", "������������", "�������������-����������", "����", "��������", "�����", "�����", "��������", "���������" },
	{ "����", "���", "���-��-�������", "�����", "��������", "������-��-����", "������", "�������", "������", "���������", "����", "������", "��������", "��������", "���������" },
	{ "���-�����", "�����-���������", "���-���������", "�������", "����������", "�������", "������", "����", "�������� ���", "����������", "�������������", "�����������", "����", "����", "������" },
	{ "�����", "�������", "�����", "�����", "�����", "����", "�����", "������", "�������", "���������", "��������", "�����", "�����", "�����", "�����" },
	{ "���������", "�������", "���", "�����", "�����", "���������", "�����", "��������", "�������"},
	{ "��������", "������", "�������", "�������", "�������", "���������", "�����", "�������", "������"},
	{ "���������", "�����-��������", "�������� ", "������", "�����", "������� ", "�������", "����", "�����", "���"},
	{ "��������", "�����", "�������� ", "����������", "������", "�����"},
	{ "����������", "����������", "���������", "������", "����", "����� ", "������", "׸���� �� ", "������", "���������"},
	{ "������", "�������", "������", "����������", "������������", "����", "��������", "�������"},
	{ "ٸ����", "ٸ����� ", "�����", "�����"},
	{ "��������", "�����", "�������", "������� ", "������������", "��������� ", "��������"},
	{ "����", "�����", "������", "�����������", "����-��������� "},
	{ "������", "����", "������", "���������", "���� ", "���������"}
	};



	string Bukva;
	int i;
	int p = 1;
	int F[40];
	for (int Check = 0; Check < 40; Check++){
		F[Check] = 0;
	}
	srand(time(0));
	while (p == 1){
		int w = 1;
		cout << "             -=������=-" << endl;
		cout << "   ������� ����� ��� X ��� ������." << endl << "     ��� ������ �������� Help." << endl << endl;
		cin >> Bukva;
		if (Bukva == "Help"){
			cout << "��� ��������� ���� ������� ��� ���������� ���� � ������." << endl << "������� ��������� ����� ����� � ��� ����� ��������� �����." << endl << endl << endl;
			system("pause");
			system("cls");
		}
		else if (Bukva == "�" & F[1] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[0][i] != "qwerty") {
					cout << A[0][i] << endl << endl;
					A[0][i] = "qwerty";
					F[1]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[2] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[1][i] != "qwerty") {
					cout << A[1][i] << endl << endl;
					A[1][i] = "qwerty";
					F[2]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[3] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[2][i] != "qwerty") {
					cout << A[2][i] << endl << endl;
					A[2][i] = "qwerty";
					F[3]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[4] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[3][i] != "qwerty") {
					cout << A[3][i] << endl << endl;
					A[3][i] = "qwerty";
					F[4]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[5] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[4][i] != "qwerty") {
					cout << A[4][i] << endl << endl;
					A[4][i] = "qwerty";
					F[5]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[6] != 11){
			while (w == 1) {
				i = rand() % 11;
				if (A[5][i] != "qwerty") {
					cout << A[5][i] << endl << endl;
					A[5][i] = "qwerty";
					F[6]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[7] != 7){
			while (w == 1) {
				i = rand() % 7;
				if (A[6][i] != "qwerty") {
					cout << A[6][i] << endl << endl;
					A[6][i] = "qwerty";
					F[7]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[8] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[7][i] != "qwerty") {
					cout << A[7][i] << endl << endl;
					A[7][i] = "qwerty";
					F[8]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[9] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[8][i] != "qwerty") {
					cout << A[8][i] << endl << endl;
					A[8][i] = "qwerty";
					F[9]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[10] != 3){
			while (w == 1) {
				i = rand() % 3;
				if (A[9][i] != "qwerty") {
					cout << A[9][i] << endl << endl;
					A[9][i] = "qwerty";
					F[10]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[11] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[10][i] != "qwerty") {
					cout << A[10][i] << endl << endl;
					A[10][i] = "qwerty";
					F[11]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[12] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[11][i] != "qwerty") {
					cout << A[11][i] << endl << endl;
					A[11][i] = "qwerty";
					F[13]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[13] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[12][i] != "qwerty") {
					cout << A[12][i] << endl << endl;
					A[12][i] = "qwerty";
					F[14]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[14] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[13][i] != "qwerty") {
					cout << A[13][i] << endl << endl;
					A[13][i] = "qwerty";
					F[14]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[15] != 9){
			while (w == 1) {
				i = rand() % 9;
				if (A[14][i] != "qwerty") {
					cout << A[14][i] << endl << endl;
					A[14][i] = "qwerty";
					F[15]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[16] != 14){
			while (w == 1) {
				i = rand() % 14;
				if (A[15][i] != "qwerty") {
					cout << A[15][i] << endl << endl;
					A[15][i] = "qwerty";
					F[16]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[17] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[16][i] != "qwerty") {
					cout << A[16][i] << endl << endl;
					A[16][i] = "qwerty";
					F[17]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[18] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[17][i] != "qwerty") {
					cout << A[17][i] << endl << endl;
					A[17][i] = "qwerty";
					F[18]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[19] != 15){
			while (w == 1) {
				i = rand() % 15;
				if (A[18][i] != "qwerty") {
					cout << A[18][i] << endl << endl;
					A[18][i] = "qwerty";
					F[19]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[20] != 9){
			while (w == 1) {
				i = rand() % 9;
				if (A[19][i] != "qwerty") {
					cout << A[19][i] << endl << endl;
					A[19][i] = "qwerty";
					F[20]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[21] != 9){
			while (w == 1) {
				i = rand() % 9;
				if (A[20][i] != "qwerty") {
					cout << A[20][i] << endl << endl;
					A[20][i] = "qwerty";
					F[21]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[22] != 10){
			while (w == 1) {
				i = rand() % 10;
				if (A[21][i] != "qwerty") {
					cout << A[21][i] << endl << endl;
					A[21][i] = "qwerty";
					F[22]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[23] != 6){
			while (w == 1) {
				i = rand() % 6;
				if (A[22][i] != "qwerty") {
					cout << A[22][i] << endl << endl;
					A[22][i] = "qwerty";
					F[23]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[24] != 10){
			while (w == 1) {
				i = rand() % 10;
				if (A[23][i] != "qwerty") {
					cout << A[23][i] << endl << endl;
					A[23][i] = "qwerty";
					F[24]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[25] != 8){
			while (w == 1) {
				i = rand() % 8;
				if (A[24][i] != "qwerty") {
					cout << A[24][i] << endl << endl;
					A[24][i] = "qwerty";
					F[25]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[26] != 4){
			while (w == 1) {
				i = rand() % 4;
				if (A[25][i] != "qwerty") {
					cout << A[25][i] << endl << endl;
					A[25][i] = "qwerty";
					F[26]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[27] != 7){
			while (w == 1) {
				i = rand() % 7;
				if (A[26][i] != "qwerty") {
					cout << A[26][i] << endl << endl;
					A[26][i] = "qwerty";
					F[27]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[28] != 5){
			while (w == 1) {
				i = rand() % 5;
				if (A[27][i] != "qwerty") {
					cout << A[27][i] << endl << endl;
					A[27][i] = "qwerty";
					F[28]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "�" & F[29] != 6){
			while (w == 1) {
				i = rand() % 6;
				if (A[28][i] != "qwerty") {
					cout << A[28][i] << endl << endl;
					A[28][i] = "qwerty";
					F[29]++;
					w = 0;
					system("pause");
					system("cls");
				}
			}
			Bukva = "Z";
		}
		else if (Bukva == "X"){
			p = 0;
		}
		else {
			cout << "��������� ������" << endl << "(������� ����� �������, ��������� �����.)" << endl << endl;
			system("pause");
			system("cls");
		}
	}

	return 0;
}
