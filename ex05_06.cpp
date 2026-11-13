#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   srand(time(0));

   cout << "a) " << rand() % 2 + 1 << "\n";        // 1 <= n <= 2
   cout << "b) " << rand() % 100 + 1 << "\n";      // 1 <= n <= 100
   cout << "c) " << rand() % 10 << "\n";           // 0 <= n <= 9
   cout << "d) " << rand() % 113 + 1000 << "\n";   // 1000 <= n <= 1112
   cout << "e) " << rand() % 3 - 1 << "\n";        // -1 <= n <= 1
   cout << "f) " << rand() % 15 - 3 << "\n";       // -3 <= n <= 11

   return 0;
}
