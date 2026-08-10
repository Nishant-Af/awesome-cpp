#include <iostream>
using namespace std;

class strfunctions
{

    string str1;
    string str2;
    int strlen1 = 0, strlen2 = 0;

public:
    void set_string(void)
    {
        cout << "Enter 2 Strings to Compare them : " << endl;
        cout << "----------------------------------------->" << endl;
        cout << "Enter Your String 1 : ";
        cin >> str1;
        cout << "Enter Your String 2 : ";
        cin >> str2;
    }

    void find_string_length(void)
    {
        for (int i = 0; str1[i] != '\0'; i++)
        {
            strlen1 += 1;
        }
        for (int i = 0; str2[i] != '\0'; i++)
        {
            strlen2 += 1;
        }
    }
    void compare_Strings(void)
    {
        if (strlen1 == strlen2)
        {
            for (int i = 0; i < strlen1; i++)
            {
                if (str1[i] == str2[i])
                {
                    cout << str1 << " and " << str2 << " are Same No difference !!" << endl;
                    break;
                }
                else
                {
                    cout << "Can't You See diffenrce in " << str1 << " and " << str2 << endl;
                    break;
                }
            }
        }
        else
        {
            cout << str1 << " and " << str2 << " are Differnet " << endl;
        }
    }
};

int main()
{
    strfunctions s1;
    s1.set_string();
    s1.find_string_length();
    s1.compare_Strings();
    return 0;
}