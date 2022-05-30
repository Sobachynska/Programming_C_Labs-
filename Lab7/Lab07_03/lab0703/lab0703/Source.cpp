#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int lab1_1()
{
		float a, b;
		cout << "����i�� ����� �����: ";
		cin >> a;
		cout << "����i�� ����� �����: ";
		cin >> b;

		float arithmetic = (a * a + b * b) / 2;
		float geometric = sqrt(pow(a, 3) * pow(b, 3));
		float Suma = arithmetic + geometric;


		cout << "���� ���������� ������������� ���i� ������� i ������� ����� �� ���������� ������������� i� �������i� = " << Suma<<endl;
		cout << endl;
		return 0;
}
int lab1_2() {
	setlocale(LC_CTYPE, "ukr");
	float ft;


	cout << "����i�� ��i�� ������ � ����� : ";
	cin >> ft;
	float cm = ft * 30.48;

	cout << "��i�� ������ � ����������� :" << cm<<endl;
	cout << endl;

	return 0;
}
int lab2_1(){
	double  x1, y1, x2, y2, s1, s2;
	cout << "����i�� ���������� ����� x1:" << endl;
	cin >> x1;
	cout << "����i�� ���������� ����� y1:" << endl;
	cin >> y1;
	cout << "����i�� ���������� ����� x2:" << endl;
	cin >> x2;
	cout << "����i�� ���������� ����� y2:" << endl;
	cin >> y2;
	s1 = sqrt(x1 * x1 + y1 * y1);
	s2 = sqrt(x2 * x2 + y2 * y2);

	if (s1 > s2) {
		cout << "����� ����� ����������� ���I �i� ������� ���������." << endl;
		cout << endl;
	}
	else if (s1 == s2) {
		cout << "����� ����������� �i������ ��������� ��������." << endl;
		cout << endl;
	}
	else {
		cout << "����� ����� ����������� ���I �i� ������� ���������." << endl;
		cout << endl;
	}




	
	return 0;
}
int lab2_2() {
	double x, res;
	cout << "����i�� �������� x:" << endl;
	cin >> x;
	res = sqrt(x * x - 2.5);
	if (x >= 1.6) {
		cout << "��� ��������� : " << res << endl;
		cout << endl;

	}
	else {
		cout << "���������� ��������i - �i�'����� �i���������� �����!" << endl;
		cout << endl;
	}


	return 0;
}
int lab3(){
	float a, b;
	cout << "������ a : ";
	cin >> a;
	cout << "������ b : ";
	cin >> b;
	float* ptra = &a;
	float* ptrb = &b;

	if (a > b) {

		a = *ptra + 7;
		cout << "�i���� a = " << a << endl;
		b = *ptrb - 3;
		cout << "����� b = " << b << endl;
		cout << endl;
	}
	else {
		b = *ptrb + 7;
		cout << "�i���� b = " << b << endl;
		a = *ptra - 3;
		cout << "����� a = " << a << endl;
		cout << endl;

	}

	return 0;
}
int lab4_1() {
	srand(time(NULL));
	const int n = 50;
	double mas[n];
	double norm = 0;

	for (int i = 1; i < n; i++) {

		cout << "����i�� �i���i��� �����i� � " << i + 1950 << " ���i :";
		mas[i]= rand()%20;
		norm = norm + mas[i];
	}
	norm = norm / n;
	for (int i = 1; i < n; i++) {
		if (mas[i] > norm) {
			cout << "� " << 1900 + i << " �i���i��� �����i� ���� �� " << (mas[i] - norm) << " �� �i���� �����." << endl;
		}
		else {
			if (mas[i] < norm) {
				cout << "� " << 1900 + i << " �i���i��� �����i� ���� �� " << (mas[i] - norm) << " �� ����� �����." << endl;
			}
			else {
				cout << "� " << 1900 + i << " �i���i��� �����i� ���� � ����i." << endl;

			}

		}
	}
	cout << "������� �i���i��� �����i�=" << norm << "." << endl;
	return 0;
}
int lab4_2() {
	srand(time(NULL));
	const int N = 20;
	int A[N];
	int amount, i, j;
	for (i = 0; i < N; i++)
	{

		A[i] = rand() % 10;
		cout << A[i] << " ";
	}
	for (i = 0, amount = 0; i < N - 1; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (A[i] == A[j])
			{
				amount++;
				break;
			}
		}
	}
	cout << "������ ��i�������� " << amount << " �������i�." << endl;
	return 0;
}
int lab5(){
	string str;

	cout << "���i��� �� ��i�: \n";

	getline(cin, str);

	for (int i = 0; i < str.length(); i++)

	{

		if (str[i] == '.')

		{

			if (str[i + 1] == '.' && str[i + 2] == '.')

				i += 2;

			else

			{

				for (int j = 0; j < 2; j++)

				{

					str.insert(i, ".");

					i++;
				}

			}
		}
	}



	cout << "���i��� �i��� ��i� =\n" << str << endl;
	cout << endl;

	return 0;
}
struct WORKER {
	char surname[30];
	char initials[5];
	char post[30];
	int date;
};

void sort(WORKER* Wbase, int size) {   //������������ �����
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (strcmp(Wbase[j].surname, Wbase[j + 1].surname) > 0) {
				WORKER Wtemp = Wbase[j];
				Wbase[j] = Wbase[j + 1];
				Wbase[j + 1] = Wtemp;
			}
		}
	}
}

void print(WORKER* Wbase, int num) {
	cout << "\n���������  " << Wbase[num].surname;
	cout << "\n������: " << Wbase[num].post;
	cout << "\n��������� �� ������:" << Wbase[num].date << endl;

}
int lab6() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int N;
	cout << "����i�� �i���i��� ����i����i� : ";
	cin >> N;
	int staj;
	bool f = false;
	WORKER* a = new WORKER[N];
	for (int i = 0; i < N; i++) {
		cout << endl;
		cout << "����i�� i�������i� ��� ����i����� �" << i + 1 << ":" << endl;

		cout << "��i�����: ";    cin >> a[i].surname;

		cout << "��'�: "; cin >> a[i].initials;

		cout << "������: "; cin >> a[i].post;

		cout << "г� ����������� �� ������: "; cin >> a[i].date;
	}
	cout << endl;
	cout << endl;
	sort(a, N);
	cout << "������ ���� ������ � ���������� : " << endl;
	cin >> staj;
	cout << "������� ����������, ��� ���� ������ � ���������� �������� "
		<< staj << " ����:";
	for (int i = 0; i < N; i++) {
		if ((2022 - a[i].date) >= staj) {
			print(a, i);
			f = true;
		}
	}
	if (!f)
		cout << "³�����." << endl;

	delete[] a;
	system("pause");
	return 0;
}
#define zrazok 123454321

unsigned reverse(unsigned x)
{
	unsigned a = 0;
	while (x) a = 10 * a + (x % 10), x /= 10;
	return a;
}


unsigned reverse_recursively(unsigned x, unsigned a)
{
	return x ? reverse_recursively(x / 10, 10 * a + (x % 10)) : a;
}

bool is_palindrome(unsigned x)
{

	return x == reverse_recursively(x, 0);
}
int lab7(){
	for (unsigned x = zrazok - 1; x != zrazok + 2; x++)
		printf("����� %u - %s\n", x, is_palindrome(x) ? "��������" : "�� ��������");

	return 0;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������ ������� ����������� ������ �1, ������ �1: " << endl;
	lab1_1();
	cout << "������ ������� ����������� ������ �1, ������ �2: " << endl;
	lab1_2();
	cout << "������ ������� ����������� ������ �2, ������ �1: " << endl;
	lab2_1();
	cout << "������ ������� ����������� ������ �2, ������ �2: " << endl;
	lab2_2();
	cout << "������ ������� ����������� ������ �3: " << endl;
	lab3();
	cout << "������ ������� ����������� ������ �4, ������ �1: " << endl;
	lab4_1();
	cout << "������ ������� ����������� ������ �4, ������ �2: " << endl;
	lab4_2();
	cout << "������ ������� ����������� ������ �5: " << endl;
	lab5();
	cout << "������ ������� ����������� ������ �6: " << endl;
	lab6();
	cout << "������ ������� ����������� ������ �7: " << endl;
	lab7();

}