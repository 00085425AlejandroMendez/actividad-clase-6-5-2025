#include <iostream>
#include <cmath> // Para usar abs()

using namespace std;

int main()
{
    int numero1, numero2;
    cout << "Ingrese un numero: ";
    cin >> numero1;
    cout << "Ingrese otro numero: ";
    cin >> numero2;
 
    int distancia1 = abs(100 - numero1);
    int distancia2 = abs(100 - numero2);

    if (distancia1 < distancia2)
    {
        cout << "El numero mas cercano a 100 es: " << numero1 << endl;
    }
    else if (distancia2 < distancia1)
    {
        cout << "El numero mas cercano a 100 es: " << numero2 << endl;
    }
    else
    {
        cout << "Ambos numeros estan a la misma distancia de 100." << endl;
    }

    return 0;
}
