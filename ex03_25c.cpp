#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double x{0.0};
   int terminos{0};
   cout << "Valor de x: ";
   cin >> x;
   cout << "Numero de terminos de la suma: ";
   cin >> terminos;

   double resultado{1.0}; 
   double termino{1.0}; 

   for (int i{1}; i <= terminos; i++)
   {
      termino = termino * x / i;
      resultado = resultado + termino;
   }

   cout << fixed << setprecision(10);
   cout << "e^" << x << " = " << resultado << "\n";

   return 0;
}
