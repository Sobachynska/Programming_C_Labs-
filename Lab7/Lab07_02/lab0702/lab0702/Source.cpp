#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    double a, sum = 0;
    cout << "������ ����� n � ����� 4<n<10: " << endl;
    cin >> n;
    if (4 < n && n < 10) {
        cout << "������ " << n << " ��������: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "a" << i + 1 << "= ";
            cin >> a;
            sum += a;
        }
        cout << "sum=" << abs(sum) << endl;
    }
    else
    {
        cout << "������ ����� n �� � ����� 4<n<10:" << endl;
    }
    return 0;
}