#include <iostream>
using namespace std;

int main() {
   int number{0};
   cout << "Introduce un entero de cuatro cifras: ";
   cin >> number;

   // separar las cifras
   int d1{number / 1000};
   int d2{(number / 100) % 10};
   int d3{(number / 10) % 10};
   int d4{number % 10};

   // sumar 7 y quedarse con el resto de dividir entre 10
   d1 = (d1 + 7) % 10;
   d2 = (d2 + 7) % 10;
   d3 = (d3 + 7) % 10;
   d4 = (d4 + 7) % 10;

   // intercambiar 1a con 3a y 2a con 4a
   int temp{d1};
   d1 = d3;
   d3 = temp;

   temp = d2;
   d2 = d4;
   d4 = temp;

   cout << "Entero cifrado: " << d1 << d2 << d3 << d4 << "\n";
}
