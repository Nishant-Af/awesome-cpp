#include <iostream>
#include <stdlib.h>
using namespace std;

class StrToInt
{
    string numeric;
    int number;
    void *ptr = &numeric;

public:
    void set_string()
    {
        cout << "Enter Your String To Convert it into Numeber : ";
        cin >> numeric;
    }

    void str_to_number(void)
    {
        number = atoi(number);
        cout << numeric << " to number is " << number << endl;
    }
};

int main()
{
    StrToInt s1;
    s1.set_string();
    s1.str_to_number();
    return 0;
}