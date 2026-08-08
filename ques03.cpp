#include <iostream>
using namespace std;

class asciiToInt
{
private:
    char favchar;

public:
    void ASCII_TO_INTEGER(void);
    void PRINT_ASCII_VALUE(void);
};

void asciiToInt::ASCII_TO_INTEGER(void)
{
    cout << "Enter Your Favourate Character : " << endl;
    cin >> favchar;
}

void asciiToInt ::PRINT_ASCII_VALUE(void)
{
    cout << "ASCII Value of '" << favchar << "'" << " is " << (int)favchar << endl;
}

int main()
{
    asciiToInt ch1;
    ch1.ASCII_TO_INTEGER();
    ch1.PRINT_ASCII_VALUE();
    return 0;
}