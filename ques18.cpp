#include <iostream>
using namespace std;

class OperationsInArray
{
    int greatest, smallest;
    public:
        void maxMin(int arr[], int len){

        }
};

int main(){
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

    return 0;
}