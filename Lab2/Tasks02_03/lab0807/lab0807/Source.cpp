#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int n, answer = 0;
    float x;
    float j;
    float sum = 0;
    cout << "����i�� n: ";
    cin >> n;
    cout << "����i�� x: ";
    cin >> x;
    for (float a = 0; a <= n; a++) {
        sum = sum + a;
        j = sum;
        cout << j << "\n";
        if (x == j)
        {
            answer = answer + 1;
        }
    }
    cout << "� �����i������ " << answer << " ���";
    return 0;
}