#include <iostream>
#include "Main.h"

using namespace std;
int main()
{
    double variant;
    cout << "Enter variant:";
    cin >> variant;
    double x = 0.48 * variant;
    double y = 0.49 * variant;
    double z = -1.32 * variant;

    B b(x, y, z);
    A a(x, y, z, b.calculate());
    cout << "a[x, y, z, b] = " << a.calculate() << endl;
    cout << "b[x, y, z] = " << b.calculate();

    return 0;
}