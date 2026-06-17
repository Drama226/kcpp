#include "../include/ZadClassExample.h"
#include <iostream>
using namespace std;


int main() {
    Napoje Monster;
    Monster.Napoj = "Monster Energy";
    Monster.cena = 5.50;
    Monster.litraz = 0.5;
    Napoje MountainDew;
    MountainDew.Napoj = "Mountain Dew";
    MountainDew.cena = 4.99;
    MountainDew.litraz = 0.5;

    Monster.opis();
    MountainDew.opis();

    return 0;
}