#include <iostream>
using namespace std;

class Calculator
{
    int num1, num2;
    enum choice
    {
        Quit,
        Addition,
        Subtraction,
        Multiplication,
        Division
    };
    int ch;

public:
    void setData()
    {
        cout << "Enter a Number 1 : ";
        cin >> num1;
        cout << "Enter a Number 2 : ";
        cin >> num2;
    }

    void choice()
    {
        cout << "----------------------------------------------------------------------------->" << endl;
        cout << "Choose Your Choice According TO Your Need...................................." << endl;
        cout << "0 : for Quit" << endl;
        cout << "1 : for Addition" << endl
             << "2 : for Subtraction" << endl
             << "3 : for Multilpication" << endl
             << "4 : for Division" << endl;
        cout << "----------------------------------------------------------------------------->" << endl;
        cout << "Enter Your Choice Sir : " << endl;
        cin >> ch;
    }

    void processing()
    {
        if (ch == Addition)
        {
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        }
        else if (ch == Subtraction)
        {
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        }
        else if (ch == Multiplication)
        {
            cout << num1 << " X " << num2 << " = " << num1 * num2 << endl;
        }
        else if (ch == Division)
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        else if (ch == Quit)
        {
            cout << "You Are Quitting !!!!!!" << endl;
        }
        else
        {
            cout << "Please Enter a Valid Syntax" << endl;
        }
    };
};

int main()
{
    Calculator C1;
    C1.setData();
    C1.choice();
    C1.processing();
    return 0;
}