#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calcularCobro(double horas);

int main()
{
   double totalHoras{0.0};
   double totalCobro{0.0};

   cout << fixed << setprecision(2);
   cout << "Car\tHours\tCharge\n";

   for (int coche{1}; coche <= 3; coche++)
   {
      double horas{0.0};
      cout << "Horas del coche " << coche << ": ";
      cin >> horas;

      double cobro{calcularCobro(horas)};

      totalHoras = totalHoras + horas;
      totalCobro = totalCobro + cobro;

      cout << coche << "\t" << horas << "\t" << cobro << "\n";
   }

   cout << "TOTAL\t" << totalHoras << "\t" << totalCobro << "\n";

   return 0;
}

double calcularCobro(double horas)
{
   double cobro{20.0};

   if (horas > 3.0)
   {
      cobro = cobro + 5.0 * ceil(horas - 3.0);
   }

   if (cobro > 50.0)
   {
      cobro = 50.0;
   }

   return cobro;
}
