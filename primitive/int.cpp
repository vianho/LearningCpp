#include <iostream>
using namespace std;

int main() 
{
    int result;

    int a = 5;
    int b(5);
    int c{6};

    result = a + b + c;

    cout << result;

    return 0;
}
