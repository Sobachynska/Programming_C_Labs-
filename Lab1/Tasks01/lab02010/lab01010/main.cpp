#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ukr");
	float ft;
	

	cout << "����i�� ��i�� ������ � ����� : ";
	cin >> ft; 
	float cm = ft*30.48;
	
	cout << "��i�� ������ � ����������� :" << cm;

	return 0;
}
