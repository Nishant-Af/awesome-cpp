#include <iostream>
#include <string>
using namespace std;

class strfunctions
{
    string str;
    string copystr;

public:
    void set_str()
    {
        cout << "Enter Your String to Check it's a Palindrome or not : ";
        cin >> str;
        copystr = str;
    }
    void chk_str_palindrome(void)
    {
        for (int i = 0; i < str.length(); i++)
        {
            copystr[i] = str[(str.length() - 1 - i)];
        }
        if (copystr == str)
        {
            cout<<str<<" is a Palindrome String !!"<<endl;
        }
        else{
            cout<<"it's Palindrome is : "<<copystr<<endl;
            cout<<"This is Not a Palindrome String"<<endl;
        }
        
    }
};

int main()
{
    strfunctions s1;
    s1.set_str();
    s1.chk_str_palindrome();
    return 0;
}