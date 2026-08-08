#include <iostream>
using namespace std;

class oddeve
{
private:
    int num;

public:
    void set_num(void)
    {
        cout << "Enter a Number to check it's odd or even : " << endl;
        cin >> num;
    }

    void chk_odd_even()
    {
        if (num < 0)
        {
            cout << "Your " << num << " should not be Negetaive " << endl;
        }
        else
        {
            if (num % 2 == 0)
            {
                cout << num << " is even" << endl;
            }
            else
            {
                cout << num << " is odd" << endl;
            }
        }
    }
};

int main()
{
    oddeve obj1;
    obj1.set_num();
    obj1.chk_odd_even();
    return 0;
}