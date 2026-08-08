#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class palindrome
{
    string num, reversed;
    int len = num.length();

public:
    void setData(void);
    void processing(void);
    void chk_palindrome(void);
};

void palindrome ::setData(void)
{
    cout << "Enter a Number ";
    cin >> num;
}

void palindrome::processing(void)
{
    len = num.length();

    // Assign num to reversed so it has the correct size allocated
    reversed = num;

    // Reverse copy
    for (int i = 0; i < len; i++)
    {
        reversed[i] = num[len - 1 - i];
    }
}

void palindrome ::chk_palindrome()
{

    if (num == reversed)
    {
        cout << num << " is a palindrome" << endl;
    }
    else
    {
        cout << num << " is not a palindrome" << endl;
    }
}

int main()
{
    palindrome number;
    number.setData();
    number.processing();
    number.chk_palindrome();
    return 0;
}