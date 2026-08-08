#include <iostream>
using namespace std;

class Swapping
{
private:
    int num1, num2;

public:
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    void setData(void);
    void swap();
    void show_data(void);
};

void Swapping ::setData()
{
    cout << "Enter Number for Swapping !!!" << endl;
    cout << "Enter Number 1 : " << endl;
    cin >> num1;
    cout << "Enter Number 2 : " << endl;
    cin >> num2;
}

void Swapping ::swap()
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void Swapping::show_data()
{
    cout << "Value of Number 1 : " << num1 << endl;
    cout << "Value of Number 2 : " << num2 << endl;
}

int main()
{
    Swapping num;
    num.setData();
    cout << ("Before Swapping -------------------------------->") << endl;
    num.show_data();
    cout << ("After Swapping --------------------------------->") << endl;
    num.swap();
    num.show_data();

    return 0;
}