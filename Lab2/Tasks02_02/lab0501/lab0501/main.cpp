#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int n;

    cout << "����i�� ����� �i����: ";
    cin >> n;

    switch (n)
    {
    case 1: cout << "�i����\n"; break;
    case 2: cout << "�����\n"; break;
    case 3: cout << "��������\n"; break;
    case 4: cout << "��i����\n"; break;
    case 5: cout << "�������\n"; break;
    case 6: cout << "�������\n"; break;
    case 7: cout << "������\n"; break;
    case 8: cout << "�������\n"; break;
    case 9: cout << "��������\n"; break;
    case 10: cout << "�������\n"; break;
    case 11: cout << "��������\n"; break;
    case 12: cout << "�������\n"; break;
    }

    if ((n == 12) || (n == 1) || (n == 2))
        cout << "����\n";
    else if ((n == 3) || (n == 4) || (n == 5))
        cout << "�����\n";
    else if ((n == 6) || (n == 7) || (n == 8))
        cout << "�i��\n";
    else if ((n == 9) || (n == 10) || (n == 11))
        cout << "��i��\n";
    else
        cout << "������ �i���� �� i���!";

    _getch();
    return 0;
}