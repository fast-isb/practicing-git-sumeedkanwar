#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    cout << "Basic Calculator" << endl;
    cout << "2 + 3 = " << add(2, 3) << endl;
    cout << "5 - 2 = " << subtract(5, 2) << endl;
    cout << "4 * 3 = " << multiply(4, 3) << endl;
    return 0;
}