#include <iostream>
#include <conio.h>
#include <clocale>

using namespace std;

int ascii_cod(char x);

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");
    char c;
    cout << "         ������� ������: ";
    cin >> c;
    int b = ascii_cod(c);
    cout << " ASCII ��� ����� ������� " << c << " = " << b << endl;

    cout << "____________________________________" << endl;

    int ch;
    cout << "������� ASCII ���: ";
    cin >> ch;
    cout << " ������:  ";
    cout.put(ch);

    
}

int ascii_cod(char x)
{
    int a;
    a = x;
    return a;
}