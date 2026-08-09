#include <iostream>
using namespace std;

class OperationsInArrays
{
    public:
    void linear_search(int arr[], int searchfor, int len){
        for (int i = 0; i < len; i++)
        {
            if (arr[i] == searchfor)
            {
                cout<<searchfor<<" is foud in you array at position "<<arr[i]<<endl;
            }
            
        }
        
    }
};

int main(){
    int size, search;
    cout << "Enter Size of Your Array : ";
    cin >> size;
    int array[size];
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length; i++)
    {
        cout << "Enter Value in Your Array at the Position " << i << " : " << endl;
        cin >> array[i];
    }

    cout<<"Enter Number to Seach in Your Array : ";
    cin>>search;


    OperationsInArrays  O1;
    O1.linear_search(array, search, length);


    return 0;
}