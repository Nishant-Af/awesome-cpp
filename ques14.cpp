#include <iostream>
using namespace std;

int fibonnaci(int n)
{
    // Standard Base Cases
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        // We can also combine these two base cases into: if (n <= 1) return n;
        return 1;
    }
    // Recursive Case
    return fibonnaci(n - 1) + fibonnaci(n - 2);
}

int main()
{
    int number;
    cout << "Enter a \"n\" term to find fibonacci term: ";
    cin >> number;
    cout << "The " << number << "th term in Fibonacci Series is " << fibonnaci(number) << endl;

    return 0;
}
