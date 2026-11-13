#include <iostream>
using namespace std;

int main()
{
    int numero{ 0 };
    cout << "Introduce un entero: ";
    cin >> numero;

    int invertido{ 0 };

    while (numero > 0)
    {
        invertido = invertido * 10 + numero % 10;
        numero = numero / 10;
    }

    cout << "Invertido: " << invertido << "\n";

    return 0;
}