#include <iostream>
#include <string>

using namespace std;

// Funkcje z linkage C
extern "C" void funkcja1(){
    cout << "Kocham PoE (Extern C)" << endl;
};
void funkcja2(){
    cout << "Kocham PoE2 (C++)" << endl;
};
void funkcja3(){
    cout << "Nie Ma PoE3 (C++)" << endl;
};
extern "C" void funkcja4(){
    cout << "Nie Ma PoE4 (Extern C)" << endl;
};
void funkcja5(){
    cout << "Nie Ma PoE5 (C++)" << endl;
};


int main(int argc, char* argv[]) {

    if (argc < 2) {
        cout << "Uzycie: " << argv[0]
             << " f1 f2 f3 f4 f5" << endl;
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        string arg = argv[i];

        switch (arg[1]) {
            case '1':
                funkcja1();
                break;
            case '2':
                funkcja2();
                break;
            case '3':
                funkcja3();
                break;
            case '4':
                funkcja4();
                break;
            case '5':
                funkcja5();
                break;
             default:
                cout << "Nieznana funkcja: " << arg << endl;
        }
    }

    return 0;
}