#include <iostream>
using namespace std;
int main()
{
    // cout << "Hello World";

    // Taking input from user
    int n;
    cin >> n;
    cout << "Entered Number is: " << n << endl;

    // Statement
    if (n > 0)
    {
        cout << "positive number.";
    }
    else if (n < 0)
    {
        cout << "Negative number.";
    }
    else
    {
        cout << "Zero.";
    }
}