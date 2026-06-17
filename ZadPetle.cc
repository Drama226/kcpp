#include <iostream>

using namespace std;

void petlaWhile()
{
    cout << "\n--- WHILE ---" << endl;

    int i = 0;

    while (i < 10)
    {
        i++;
        if (i == 7)
            break;

        cout << "i = " << i << endl;
    }

    return;
}

void petlaDoWhile()
{
    cout << "\n--- DO WHILE ---" << endl;

    int i = 0;

    do
    {
        i++; 
        cout << "i = " << i << endl;

    } while (i < 10);

    return;
}

void petlaFor()
{
    cout << "\n--- FOR ---" << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
            continue;
        cout << "i = " << i << endl;
    }

    return;
}

int main()
{
    petlaWhile();
    petlaDoWhile();
    petlaFor();

    return 0;
}