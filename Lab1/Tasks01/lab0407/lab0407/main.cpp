#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	double y, t, a,s0=120,s; //�� y �� ��������, t - ���, � - �����������, s0 - ����� ��������� �������, s- �������, ��� �� ������
	cout << "����i�� �����i��� : ";
	cin >> y;
	cout << "����i�� ��� : ";
	cin >> t;
	cout << "����i�� ����������� : ";
	cin >> a;
	

	s = y * (s0 / y) + (a * pow(t, 2) / 2);

	cout << "�i������ �i����� : " << s;

	return 0;
}

