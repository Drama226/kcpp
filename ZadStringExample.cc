#include <iostream>
using namespace std;

int main() {
    string a, b;
    a = "Kocham PoE";
    b = "";
    cout << "a: " << a << endl;

    cout << "a.empty(): " << a.empty() << endl;

    cout << "b.empty(): " << b.empty() << endl;

    cout << "a.size(): " << a.size() << endl;

    cout << "a.length(): " << a.length() << endl;

    cout << "a.at(0): " << a.at(0) << endl;

    cout << "a.find(\"PoE\"): " << a.find("PoE") << endl;

    cout << "a.substr(7, 3): " << a.substr(7, 3) << endl;
    
    a.append("2");
    cout << "a.append(\"2\"): " << a << endl;

    a.erase(0, 3);
    cout << "a.erase(0, 3): " << a << endl;
    
    a.swap(b);
    cout << "a.swap(b); a: " << a << ", b: " << b << endl;

    b.clear();
    cout << "b.clear():" << b << endl;

}