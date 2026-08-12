#include <iostream>
using namespace std;

class Search
{
private:
    int searchfor, n;
    int *array = new int[n];

public:
    void set_array()
    {
        cout << "Enter How Much Data You Want to Store in Your Array : ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << "Array [" << i << "] : ";
            cin >> array[i];
        }
    }
    void set_Data()
    {
        cout << "Enter Number to Search in Your Array : ";
        cin >> searchfor;
    }

    void searching()
    {
        for (int i = 0; i < n; i++)
        {
            if (searchfor == array[i])
            {
                cout << searchfor << " found in your Array at index " << i << endl;
                break;
            }
            else
            {
                continue;
            }
        }
        delete[] array;
    }
};

int main()
{
    Search s1;
    s1.set_array();
    s1.set_Data();
    s1.searching();
    return 0;
}