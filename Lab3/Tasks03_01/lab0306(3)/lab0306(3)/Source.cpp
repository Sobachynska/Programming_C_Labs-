#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
int main() {
	setlocale(LC_CTYPE, "ukr");

	float* ptra = new float;
	cout << "����� ����� : ";
	cin >> *ptra;
	float* ptrb = new float;
	cout << "����� ����� : " ;
	cin >> *ptrb;
	float* ptrc = new float;
	cout << "���� ����� : ";
	cin >> *ptrc;
	*ptra = *ptra / 2;
	cout << "�������� ���i�i ����� ��i�� : "<< *ptra;

	return 0;
}