#include <iostream>
using namespace std;

// mueve n discos de la varilla 'from' a la varilla 'to' usando 'aux' como soporte
void towerOfHanoi(int n, int from, int to, int aux) {
   if (n == 1) {  // caso base
      cout << from << " -> " << to << "\n";
      return;
   }

   towerOfHanoi(n - 1, from, aux, to);  // n-1 discos de origen a soporte
   cout << from << " -> " << to << "\n"; // el disco mayor
   towerOfHanoi(n - 1, aux, to, from);  // n-1 discos de soporte a destino
}

int main() {
   int disks{0};
   cout << "Numero de discos: ";
   cin >> disks;
   towerOfHanoi(disks, 1, 3, 2);
}
