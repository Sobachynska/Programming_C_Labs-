#include <iostream>
#include <math.h>

using namespace std;

int main() {

	setlocale(LC_CTYPE, "ukr");

	int a, S;

	int* ptra = &a;

	cout << "����i�� ������� ��������(� �����������) : ";
	cin >> *ptra;
	S = a * a;
	cout << "����� �������� = " << S << "c�^2";





	return 0;
}