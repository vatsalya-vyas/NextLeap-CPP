#include <iostream>
using namespace std;

int main()
{
    int a = 5; // 101

    // a += 3;   // a=a+3
    // a %= 3;   // a=a%3

    int b = a & 3; // 011

    cout << b;

    return 0;
}