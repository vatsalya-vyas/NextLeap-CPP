#include <iostream>
using namespace std;
int sum(int a, int b); // Declaration
int main()             // Start of the main function
{
    cout << sum(2, 3);

    return 0;
}
int sum(int a, int b) // Definition
{
    return a + b;
}