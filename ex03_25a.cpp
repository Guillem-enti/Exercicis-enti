#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;

int main() {
   int n{0};
   cout << "Introduce un entero no negativo: ";
   cin >> n;

   if (n < 0) {
      cout << "El numero debe ser no negativo\n";
      return 1;
   }

   cpp_int factorial{1};
   int i{2};

   while (i <= n) {
      factorial *= i;
      ++i;
   }

   cout << n << "! = " << factorial << "\n";
}
