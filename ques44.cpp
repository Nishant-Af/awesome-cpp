#include <iostream>
using namespace std;

int main()
{
    int numerator, denominator;
    cout << "Enter Numerator: ";
    cin >> numerator;
    cout << "Enter Denominator: ";
    cin >> denominator;

    if (denominator == 0)
    {
        cout << "Math error: Attempted to divide by Zero" << endl;
    }
    else
    {
        cout << numerator << " / " << denominator << " = " << numerator / denominator << endl;
    }

    return 0;
}