#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 8;
    cout << (a <= b) && (5 != 8); // And Operator
    cout << endl;
    cout << (a < b) || (a == b); // OR Operator
    cout << endl;
    cout << !(a == b); // Not Operator
    return 0;
}