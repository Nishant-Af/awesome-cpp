#include <iostream>
using namespace std;

class year
{
    int year;

public:
    void setData(void)
    {
        cout << "Enter a Year to check it's leap year or not : " << endl;
        cin >> year;
    }

    void chk_leap_year(void)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            cout << year << " is a leap year" << endl;
        }
        else if (year < 0)
        {
            cout << "You Are Time Traveller " << endl;
        }
        else
        {
            cout << year << " is not leap year" << endl;
        }
    }
};

int main()
{
    year y;
    y.setData();
    y.chk_leap_year();
    return 0;
}