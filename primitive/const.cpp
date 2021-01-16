#include <iostream>
using namespace std;

// Typed constant expression
const double pi = 3.1415926;
// preprocessor definitions
#define TAB '\t'

int main()
{
    double r = 5.0;
    double circle = 2 * pi * r;
    cout << "radius" << TAB << r << endl;
    cout << "circle circumference" << TAB << circle;
    return 0;
}