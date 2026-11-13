#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int caras{ 0 };
    int cruces{ 0 };

    for (int lanzamiento{ 1 }; lanzamiento <= 100; lanzamiento++)
    {
        int moneda{ rand() % 2 };   // 1 = cara, 0 = cruz

        if (moneda == 1)
        {
            cout << "Cara\n";
            caras++;
        }
        else
        {
            cout << "Cruz\n";
            cruces++;
        }
    }

    cout << "\nCaras: " << caras << "\nCruces: " << cruces << "\n";

    return 0;
}