#include <iostream>
using namespace std;
 
int main() {
    int opcion;
    float temperatura;
 
    cout << "1. Celsius a Kelvin\n2. Kelvin a Celsius\nElige: ";
    cin >> opcion;
 
    switch (opcion) {
        case 1:
            cin >> temperatura;
            cout << temperatura + 273.15;
            break;
        case 2:
            cin >> temperatura;
            cout << temperatura - 273.15;
            break;
        default:
            cout << "Opción no válida";
    }
 
    return 0;
}
