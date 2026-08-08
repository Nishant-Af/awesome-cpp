#include <iostream>
using namespace std;

class prime
{
    int num;

public:
    int count = 0;
    void setData(void)
    {
        cout << "Enter a Number to Check Whether the number is prime or not : ";
        cin >> num;
    }

    void processing(void)
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
    }

    void chk_prime_number(void)
    {
        if (count == 2)
        {
            cout << num << " is prime number" << endl;
        }
        else
        {
            cout << num << " is not prime number" << endl;
        }
    }
};

int main()
{
    prime p1;
    p1.setData();
    p1.processing();
    p1.chk_prime_number();
    return 0;
}