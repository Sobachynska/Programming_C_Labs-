#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	int n, f;
	cout << "����i�� ����i�� ��� ����� 2 : " << endl;
	cin >> n;

	f = pow(2, n);
	cout <<"����� 2 � ������� ������i ���� :\n"<<f;



	_getch();
	return 0;
}