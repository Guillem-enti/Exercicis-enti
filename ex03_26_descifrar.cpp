#include <iostream>
using namespace std;

int main() {
   int number{0};
   cout << "Introduce un entero cifrado de cuatro cifras: ";
   cin >> number;

   // separar las cifras
   int d1{number / 1000};
   int d2{(number / 100) % 10};
   int d3{(number / 10) % 10};
   int d4{number % 10};

   // deshacer los intercambios
   int temp{d1};
   d1 = d3;
   d3 = temp;

   temp = d2;
   d2 = d4;
   d4 = temp;

   // deshacer la suma de 7 (equivale a sumar 3 modulo 10)
   d1 = (d1 + 3) % 10;
   d2 = (d2 + 3) % 10;
   d3 = (d3 + 3) % 10;
   d4 = (d4 + 3) % 10;

   cout << "Entero original: " << d1 << d2 << d3 << d4 << "\n";
}
