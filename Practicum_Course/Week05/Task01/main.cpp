#include <iostream>

using namespace std;

void swap(int &a, int &b);
void swap(double &a, double &b);

int main()
{
    int a, b;

    cin >> a >> b;

    swap(a, b);

    cout << a << ' ' << b << endl;

    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    // по-бавно
    /*a *= b;
    b = a / b;
    a /= b;*/
}

void swap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}