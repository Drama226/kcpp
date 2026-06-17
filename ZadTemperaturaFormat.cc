#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << right;

    cout << setw(10) << "Celsjusz"
         << setw(15) << "Fahrenheit" << endl;

    cout << setw(10) << "-------"
         << setw(15) << "---------" << endl;

    for (int c = -10; c <= 10; c += 5)
    {
        double f = c * 9.0 / 5.0 + 32.0;

        cout << setw(10) << c
             << setw(15) << fixed << setprecision(2) << f
             << endl;
    }

    return 0;
}