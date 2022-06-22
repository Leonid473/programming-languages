#include <iostream>
using namespace std;
int main()
{
    int row1, col1, row2, col2;
    double** a, ** b, ** c;
    cout << "Enter row and col for 1-st matrix" << endl;
    cin >> row1 >> col1;
    cout << "Enter row and col for 2-nd matrix" << endl;
    cin >> row2 >> col2;
    cout << endl;
    if (row1 != col2)
    {
        cout << "You can't multiply matrix!";
    }
    else
    {
        a = new double* [row1];
        cout << "Enter " << row1 * col1 << " number(s) of 1st matrix" << endl;
        for (int i = 0; i < row1; i++)
        {
            a[i] = new double[col1];
            for (int j = 0; j < col1; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "First matrix: " << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        cout << endl;

        b = new double* [row2];
        cout << "Enter " << row2 * col2 << " number(s) of 2nd matrix" << endl;
        for (int i = 0; i < row2; i++)
        {
            b[i] = new double[col2];
            for (int j = 0; j < col2; j++)
            {
                cin >> b[i][j];
            }
        }
        cout << "Second matrix: " << endl;
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }

        c = new double* [row1];
        for (int i = 0; i < row1; i++)
        {
            c[i] = new double[col2];
            for (int j = 0; j < col2; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < col1; k++)
                    c[i][j] += a[i][k] * b[k][j];
            }
        }
        cout << endl;
        cout << "Matrix multiplication:" << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
                cout << c[i][j] << " ";
            cout << endl;
        }

    }
}

















 
 

