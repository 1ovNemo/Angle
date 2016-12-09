#include <iostream>
#include "Angle.h"

using namespace std;

int main()
{
    Angle a1(108.5);

    cout << "Angle:\n" << a1.getAngle() << "\n";
    cout << "Transfer in radians:\n" << a1.transInRad() << "\n";

    return 0;
}
