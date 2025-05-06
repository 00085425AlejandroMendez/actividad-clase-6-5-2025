#include <iostream>

using namespace std;

int main(){

    int celsius;

    cout << "Ingrese un valor en grados Celsius: ";
    cin >> celsius;

    if (celsius < 15) {
        cout << "La temperatura es baja." << endl;
        return 0;
    }

    if (celsius > 15 && celsius < 25) {
        cout << "La temperatura es media." << endl;
        return 0;
    }

    if (celsius > 25) {
        cout << "La temperatura es alta." << endl;
        return 0;
    }

    
    return 0;
}