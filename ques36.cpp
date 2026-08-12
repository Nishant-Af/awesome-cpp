#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arraySize;
    int *array = new int[arraySize];
    cout << "Please Initialize Array Size : ";
    cin >> arraySize;
    for (int i = 0; i < arraySize; i++)
    {   
        cout << "Array [" << i << "] : ";
        cin >> array[i];
    }
    cout<<"--------Your Sorted Array---------"<<endl;
    return 0;
}