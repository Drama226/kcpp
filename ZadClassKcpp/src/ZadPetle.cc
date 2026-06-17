#include <iostream>
using namespace std;

#include "ZadPetle.h"

void ZadPetle::uruchom() {

    cout << "\n--- WHILE ---" << endl;

    int i = 0;
    while (i < 10) {
        i++;
        if (i == 7)
            break;
        cout << "i = " << i << endl;
    }

    cout << "\n--- DO WHILE ---" << endl;

    i = 0;
    do {
        i++;
        cout << "i = " << i << endl;
    } while (i < 10);

    cout << "\n--- FOR ---" << endl;

    for (int j = 1; j <= 10; j++) {
        if (j == 4)
            continue;
        cout << "j = " << j << endl;
    }
}