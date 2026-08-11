#include <iostream>
using namespace std;

class StarPatterns
{
private:
    int n;

public:
    void set_star(void);
    void star_pattern(void);
};

void StarPatterns ::set_star()
{
    cout << "Enter n Number to Create a Pyramid : " << endl;
    cin >> n;
}

void StarPatterns ::star_pattern()
{

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    StarPatterns p1;
    p1.set_star();
    p1.star_pattern();
    return 0;
}