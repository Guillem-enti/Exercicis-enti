#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const int accuracy{200000};
   double pi{0.0};
   double sign{1.0};
   int term{1};
   int firstTerm{0};  // primer termino con pi que empieza por 3.14159

   cout << "Accuracy set at: " << accuracy << "\n\n";
   cout << "term" << setw(14) << "pi" << "\n";
   cout << fixed << setprecision(8);

   while (term <= accuracy) {
      pi += sign * 4.0 / (2 * term - 1);
      sign = -sign;

      if (firstTerm == 0 && pi >= 3.14159 && pi < 3.14160) {
         firstTerm = term;
      }

      // tabla: los primeros 10 terminos y despues uno de cada 10000
      if (term <= 10 || term % 10000 == 0) {
         cout << left << setw(8) << term << right << pi << "\n";
      }

      ++term;
   }

   cout << "\nPrimer valor que empieza por 3.14159: termino " << firstTerm << "\n";
}
