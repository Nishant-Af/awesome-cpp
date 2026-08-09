#include <iostream>
#include <string>
using namespace std;

class OperationsInArray
{
public:
    int Average = 0;
    int arrAvg(int arr[], int len)
    {
        for (int i = 0; i < len; i++)
        {
            Average += arr[i];
        }

        Average = (Average / len);
        // cout << "Avg is : " << Average << endl;
        return Average;
    }
};

int main()
{
    int size;
    cout << "Enter Size of Your Array : ";
    cin >> size;
    int array[size];
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length; i++)
    {
        cout << "Enter Value in Your Array at the Position " << i << " : " << endl;
        cin >> array[i];
    }

    OperationsInArray O1;
    cout << "The Total Average in Your Array is : " << O1.arrAvg(array, length) << endl;

    return 0;
}
