// Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.

#include <iostream>

using namespace std;

int main()
{
    int consumo;
    double tarifa;

    cout << "Ingrese el consumo en kWh" << endl;
    cin >> consumo;

    if (consumo < 100)
    {
        cout << "La tarifa es baja" << endl;
    }
    else if (consumo > 100 && consumo < 200)
    {
        cout << "La tarifa es media" << endl;
    }
    else
    {
        cout << "La tarifa es alta" << endl;
    }

    return 0;
}