#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << a << " es mayor que " << b << endl;
    }
    else if (a < b)
    {
        cout << b << " es mayor que " << a << endl;
    }
    else
    {
        cout << a << " es igual a " << b << endl;
    }

    return 0;
}