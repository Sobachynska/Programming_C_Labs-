#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ukr");
	int a, b, c, p, h;
	cout << "����i�� ������� A: ";
	cin >> a;
	cout << "����i�� ������� B: ";
	cin >> b;
	cout << "����i�� ������� C: ";
	cin >> c;
	p = (a + b + c) / 2;
	h = (2 * sqrt(p * (p - a) * (p - b) * (p - c))) / a;
	cout << "������� ������, ������� � ������� A: " << h;





	return 0;
}