<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Podaj liczbe n: ";
    cin >> n;

    cout << "\nLiczby nieparzyste od 1 do " << n << ":" << endl;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }

    cout << "\n\nLiczby podzielne przez 3 i 5 od 1 do " << n << ":" << endl;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " ";
        }
    }

    cout << "\n\nLiczby podzielne przez 7 od 1 do " << n << ":" << endl;

    for (int i = 1; i <= n; i++)
    {
        if (i % 7 == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
=======
#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Podaj liczbe n: ";
    cin >> n;

    cout << "\nLiczby nieparzyste od 1 do " << n << ":" << endl;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }

    cout << "\n\nLiczby podzielne przez 3 i 5 od 1 do " << n << ":" << endl;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " ";
        }
    }

    cout << "\n\nLiczby podzielne przez 7 od 1 do " << n << ":" << endl;

    for (int i = 1; i <= n; i++)
    {
        if (i % 7 == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
>>>>>>> b9a64a71f9f8d086e0227ce74564a32a4c14bb71
}