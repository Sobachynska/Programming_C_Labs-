#include <iostream>
#include <conio.h>

using namespace std;





int main()
{
	setlocale(LC_ALL, "");

	const int n = 50;
	double mas[n];
	double norm = 0;

	for (int i = 1; i < n; i++) {

		cout << "����i�� �i���i��� �����i� � " << i + 1950 << " ���i :";
		cin >> mas[i];
		norm = norm + mas[i];
	}
	norm = norm / n;
	for (int i = 1; i < n; i++) {
		if (mas[i] > norm) {
			cout << "� " << 1900 + i << " �i���i��� �����i� ���� �� " << (mas[i] - norm) << " �� �i���� �����.";
		}
		else {
			if (mas[i] < norm) {
				cout << "� " << 1900 + i << " �i���i��� �����i� ���� �� " << (mas[i] - norm) << " �� ����� �����.";
			}
			else {
				cout << "� " << 1900 + i << " �i���i��� �����i� ���� � ����i.";

			}

		}
	}
	cout << "������� �i���i��� �����i�=" << norm << ".";
}


