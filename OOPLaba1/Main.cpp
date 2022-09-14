#include <iostream>
#include <iomanip>
#include <string>
#include "Main.h"

using namespace std;
int main()
{
    //Task #1
    double variant;
    cout << setw(50) << "Task #1" << endl << "Enter variant: ";
    cin >> variant;
    double x = 0.48 * variant;
    double y = 0.49 * variant;
    double z = -1.32 * variant;

    B b(x, y, z);
    A a(x, y, z, b.calculate());
    cout << "a[x, y, z, b] = " << a.calculate() << endl;
    cout << "b[x, y, z] = " << b.calculate() << endl << endl;


    //Task #2
    cout << setw(50) << "Task #2" << endl << setw(55) << "Function tabulation" << endl;
    for (double x = -1.0; x <= 1.0; x += 0.2) {
        B b(x, y, z);
        A a(x, y, z, b.calculate());
        
        cout << "x = " << to_string(x).substr(0, 4) << setw(20) << "a[x, y, z, b] = " << to_string(a.calculate()).substr(0, 8) << setw(20) << "b[x, y, z] = " << b.calculate() << endl;
    }
    cout << endl;

    return 0;
}