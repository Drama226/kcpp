#include <iostream>
#include <memory>

#include "include/LClassMetodyAbstrakcyjne.h"
#include "include/ZadArytmetykaWskaznikowSuma.h"
#include "include/ZadArytmetykaWskaznikowZnajdowanie.h"
#include "include/ZadClass.h"
#include "include/ZadDaneNaukoweFormat.h"
#include "include/ZadForA.h"
#include "include/ZadParzystaCase.h"
#include "include/ZadPetle.h"
#include "include/ZadPreprocesor.h"
#include "include/ZadPrzeciazaniePole.h"

using namespace std;

int main() {

    int wybor;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1. LClassMetodyAbstrakcyjne)\n";
        cout << "2. ZadArytmetykaWskaznikowSuma\n";
        cout << "3. ZadArytmetykaWskaznikowZnajdowanie\n";
        cout << "4. ZadClass\n";
        cout << "5. ZadDaneNaukoweFormat\n";
        cout << "6. ZadForA \n";
        cout << "7. ZadParzystaCase\n";
        cout << "8. ZadPetle\n";
        cout << "9. ZadPreprocesor\n";
        cout << "10. ZadPrzeciazaniePole (#define)\n";
        cout << "0. Wyjscie\n";
        cout << "Wybor: ";
        cin >> wybor;

        unique_ptr<ZadKcpp> zadanie;

        switch (wybor) {
            case 1:
                zadanie = make_unique<LClassMetodyAbstrakcyjne>();
                zadanie->uruchom();
                break;
            
            case 2:
                zadanie = make_unique<ZadArytmetykaWskaznikowSuma>();
                zadanie->uruchom();
                break;
            
            case 3:
                zadanie = make_unique<ZadArytmetykaWskaznikowZnajdowanie>();
                zadanie->uruchom();
                break;
            
            case 4:
                zadanie = make_unique<ZadClass>();
                zadanie->uruchom();
                break;
            
            case 5:
                zadanie = make_unique<ZadDaneNaukoweFormat>();
                zadanie->uruchom();
                break;
            
            case 6:
                zadanie = make_unique<ZadForA>();
                zadanie->uruchom();
                break;
            
            case 7:
                zadanie = make_unique<ZadParzystaCase>();
                zadanie->uruchom();
                break;
            
            case 8:
                zadanie = make_unique<ZadPetle>();
                zadanie->uruchom();
                break;
            
            case 9:
                zadanie = make_unique<ZadPreprocesor>();
                zadanie->uruchom();
                break;
            
            case 10:
                zadanie = make_unique<ZadPrzeciazaniePole>();
                zadanie->uruchom();
                break;
            
            case 0:
                cout << "Koniec\n";
                break;

            default:
                cout << "Zly wybor\n";
        }

    } while (wybor != 0);

    return 0;
}