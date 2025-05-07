#include <iostream>

using namespace std;

int main()
{
    int vel1;



    cout << "Ingrese la velocidad en km/h" << endl;

    cin >> vel1;

    if (vel1 > 60 && vel1 < 80)
    {
       cout << "La multa es de $30.00" << endl;
    }
    else if (vel1 > 80)
    {
        cout << "La multa es de $50.00" << endl;
    } else {
        cout << "Velocidad permitida, siga adelante" << endl;
    }


    return 0;
}