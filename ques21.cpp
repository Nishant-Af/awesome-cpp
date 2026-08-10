#include <iostream>
using namespace std;

class matrix
{
    int row,column;
public:
    void set_data(void);
    void data_entry(void);
    void matrix_trace(void);
};

void matrix ::set_data()
{
    cout << "Enter how Many Rows You Want in Your Array : ";
    cin >> row;
    cout << "Enter how Many Columns You Want in Your Array : ";
    cin >> column;
}

void matrix ::data_entry()
{
    int Matrix[row][column];

    for (int i = 0; i < (row); i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Enter Value in Your Matrix at Positon (" << row << ", " << column <<")"<< endl;
            cin>>Matrix[i][j];
        }
    }
}

void matrix ::matrix_trace(void){
   for (int i = 0; i < row; i++)
   {
    for (int i = 0; i < column; i++)
    {
        
    }
    
   }
   
    
}
int main()
{
    
    return 0;
}