#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE,"ukr");

	double n, a, s = 1;
	cout << "����i�� n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {

		cout << "����i�� a" << i + 1 << "= ";
		cin >> a;
	}
	for (int j = 1; j <= n; j++) {
		s = s + (a/(j+j));
	}
	cout << "��������� = " << pow(s, 2);
	return 0;
}