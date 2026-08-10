#include <iostream>
using namespace std;

class strlen
{
    string str;
    int length = 0;
    int stringlength = 0;

public:
    string name;
    void set_string(void)
    {
        cout << "Enter Your String to find it's length : " << endl;
        cin >> str;
        name = str;
    }

    void process_String(void)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            stringlength += 1;
        }
    }

    int return_string_length(void)
    {
        return stringlength;
    }
};

int main()
{
    strlen s1;
    s1.set_string();
    s1.process_String();
    cout << "length of " << s1.name << " is : " << s1.return_string_length() << endl;
    return 0;
}