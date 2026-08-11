#include <iostream>
using namespace std;

int main(){
    int n;
    int temp;
    cout<<"Enter how Many Values You Want in Your Array : "<<endl;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Array ["<<i<<"] : ";
        cin>>array[i];
    }
    
    cout<<"-----Your Sorted Array-------"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;

            }
            
        }
        
    }
    cout<<"[ ";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" , ";
    }
    cout<<" ]";
    
    

    return 0;
}