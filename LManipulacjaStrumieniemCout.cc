<<<<<<< HEAD
// LManipulacjaStrumieniemCout.cc

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a = 37.0;
    double b = 13.0;
    double c = 5.0;

    double output  = a / b;           
    double output1 = a / c;           
    double output2 = (a + b) / c;     

    double average = (output + output1 + output2) / 3.0;

    cout << setfill('=') << setw(51) << "" << endl;
    cout << setfill(' ');

    cout << "Wynika naszego dzialania: "
         << fixed << setprecision(5)
         << output
         << " jest niepoprawny ale:" << endl;

    cout << setw(12) << ""
         << "output:"
         << setw(10) << fixed << setprecision(3) << output
         << "    T:"
         << setw(8) << setprecision(3) << b / c
         << endl;

    cout << setw(12) << ""
         << "output1:"
         << setw(9) << setprecision(4) << output1
         << "   T:"
         << setw(10) << setprecision(5) << a / b
         << endl;

    cout << setw(12) << ""
         << "output2:"
         << setw(9) << setprecision(4) << output2
         << "   T:"
         << setw(11) << setprecision(6) << output + output1
         << endl;

    cout << setw(5) << ""
         << setfill('-') << setw(33) << ""
         << setfill(' ') << endl;

    cout << setw(12) << ""
         << "average:"
         << setw(9) << setprecision(4) << average
         << "   T:"
         << setw(11) << setprecision(6)
         << (output + output1 + output2)
         << endl;

    cout << setfill('=') << setw(51) << "" << endl;

    return 0;
=======
// LManipulacjaStrumieniemCout.cc

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a = 37.0;
    double b = 13.0;
    double c = 5.0;

    double output  = a / b;           
    double output1 = a / c;           
    double output2 = (a + b) / c;     

    double average = (output + output1 + output2) / 3.0;

    cout << setfill('=') << setw(51) << "" << endl;
    cout << setfill(' ');

    cout << "Wynika naszego dzialania: "
         << fixed << setprecision(5)
         << output
         << " jest niepoprawny ale:" << endl;

    cout << setw(12) << ""
         << "output:"
         << setw(10) << fixed << setprecision(3) << output
         << "    T:"
         << setw(8) << setprecision(3) << b / c
         << endl;

    cout << setw(12) << ""
         << "output1:"
         << setw(9) << setprecision(4) << output1
         << "   T:"
         << setw(10) << setprecision(5) << a / b
         << endl;

    cout << setw(12) << ""
         << "output2:"
         << setw(9) << setprecision(4) << output2
         << "   T:"
         << setw(11) << setprecision(6) << output + output1
         << endl;

    cout << setw(5) << ""
         << setfill('-') << setw(33) << ""
         << setfill(' ') << endl;

    cout << setw(12) << ""
         << "average:"
         << setw(9) << setprecision(4) << average
         << "   T:"
         << setw(11) << setprecision(6)
         << (output + output1 + output2)
         << endl;

    cout << setfill('=') << setw(51) << "" << endl;

    return 0;
>>>>>>> b9a64a71f9f8d086e0227ce74564a32a4c14bb71
}