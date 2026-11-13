#include <iostream>
using namespace std;

int main() {
   long long product{1};

   for (int i{1}; i <= 15; i += 2) {
      product *= i;
   }

   cout << "Producto de los impares del 1 al 15: " << product << "\n";
}
