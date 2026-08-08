#include <iostream>
using namespace std;

class largest_number
{
    // private: --> it's optional by default in this all members are private until we create public: block
    int num1, num2, num3;

public:
    void setData(void)
    {
        cout << "Enter 3 Number to check largest Number from amoung them " << endl;
        cout << "Enter Number 1 : ";
        cin >> num1;

        cout << "Enter Number 2 : ";
        cin >> num2;
        cout << "Enter Number 3 : ";
        cin >> num3;
    }

    void chk_largest_number(void)
    {
        if (num1 > num2 && num1 > num3)
        {
            cout << num1 << " is largest number " << endl;
        }
        else if (num2 > num1 && num2 > num3)
        {
            cout << num2 << " is largest number " << endl;
        }
        else
        {
            cout << num3 << " is largest number " << endl;
        }
    }
};

int main()
{
    largest_number number;
    number.setData();
    number.chk_largest_number();

    return 0;
}