#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	double a, x, b, c,F;
	cout << "����i�� a: ";
	cin >> a;
	cout << "����i�� x: ";
	cin >> x;
	cout << "����i�� b: ";
	cin >> b;
	cout << "����i�� c: ";
	cin >> c;
	if (x < 5 && c != 0) {
		F = -a * pow(x, 2) - b;
		cout << F << "\n������ ����� �����!";
	}
	else if (x > 5 && c == 0) {
		F = (x - a) / x;
		cout << F << "\n������ ����� �����!";
	}
	else{
		F = -(x / c); // ���� ��������� ��� �������, � ����� � ������� 0, �� �������� �������, ���� ������ �� 0 - ���������!
		cout << F << "\nI���� �������!";
	}
		
	
		

	_getch();
	return 0;
}
