#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstring>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    wcout.imbue(locale(".1251"));
    wcin.imbue(locale(".866"));
    int a, b, i, j, k;
    float p, s;

    //1
    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << endl;
        }
    }

    //2
    cin >> a >> b;
    while (a >= b)
    {
        a = a - b;
    }
    cout << a << endl;

    //3
    cin >> a;
    b = 0;
    i = 0;
    while (i<a)
    {
        b++;
        i = i + b;
    }
    cout << b << endl;

    //4
    s = 1000;
    cin >> p;
    p = 1 + p / 100;
    i = 0;
    while (s <= 1100)
    {
        i++;
        s = s * p;
    }
    cout << i << " " << s << endl;

    //5
    cin >> a >> b;
    while (a != 0 && b != 0)
    {
        if (a > b) a = a % b;
        else b = b % a;
    }
    cout << a + b << endl;

    //6
    cin >> a;
    b = 0;
    k = 0;
    i = 0;
    j = 1;
    while (j != a)
    {
        b = i + j;
        i = j;
        j = b;
        k++;
    }
    cout << k+1 << endl;
}
