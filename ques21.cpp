#include <iostream>
using namespace std;

class matrix
{
    int row, column;
    int Matrix[0][0];
    int diagonal_sum = 0;

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
    int Matrix[row][column];
}

void matrix ::data_entry()
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Enter Value in Your Matrix at Positon (" << i << ", " << j << ")" << endl;
            cin >> Matrix[i][j];
        }
    }
}

void matrix ::matrix_trace(void)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (row != column)
            {
                cout << "Error: Trace can only be calculated for a square matrix!\n";
                break;
            }
            else
            {

                if (i == j)
                {
                    diagonal_sum += Matrix[i][j];
                }
            }
        }
    }

    cout << "The Trace of a Matrix is " << diagonal_sum << endl;
}
int main()
{
    matrix obj1;
    obj1.set_data();
    obj1.data_entry();
    obj1.matrix_trace();
    return 0;
}