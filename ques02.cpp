#include <iostream>
using namespace std;

class numbers
{
private:
    int num;

public:
    void get_num(void);
    void print_num(void);
};

void numbers ::get_num()
{
    cout << "Enter a Numebr : " << endl;
    cin >> num;
}

void numbers ::print_num()
{
    cout << "Your Number is " << num << endl;
}

int main()
{
    numbers n1;
    n1.get_num();
    n1.print_num();
    return 0;
}