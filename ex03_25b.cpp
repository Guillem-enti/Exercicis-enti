#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int terms{0};
   cout << "Numero de terminos de la suma: ";
   cin >> terms;

   double e{1.0};          // primer termino
   double factorial{1.0};  // i!
   int i{1};

   while (i <= terms) {
      factorial *= i;      // i! = (i-1)! * i
      e += 1.0 / factorial;
      ++i;
   }

   cout << fixed << setprecision(10) << "e ~ " << e << "\n";
}
