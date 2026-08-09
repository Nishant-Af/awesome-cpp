#include <iostream>
using namespace std;

class numberSwapping
{
public:
    void swap(int &n1, int &n2)
    {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
};

int main()
{
    int num1, num2;
    cout << "Enter Two Number to Swap their Values : " << endl;
    cout << "Enter Number 1 : ";
    cin >> num1;
    cout << "Enter Number 2 : ";
    cin >> num2;
    numberSwapping n;
    cout << "Numbers Before Swapping ------------------------->" << endl
         << "Number 1 : " << num1 << endl
         << "Number 2 : " << num2 << endl;
    n.swap(num1, num2);
    cout << "Numbers After Swapping -------------------------->" << endl
         << "Number 1 : " << num1 << endl
         << "Number 2 : " << num2 << endl;

    return 0;
}