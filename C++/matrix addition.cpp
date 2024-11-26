#include <iostream>
using namespace std;

int main()
{
    int row, col, a[50][50], b[50][50], sum[50][50], i, j;

    cout << "Enter number of rows (between 1 and 100): " << endl;
    cin >> row;

    cout << "Enter number of columns (between 1 and 100): " << endl;
    cin >> col;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    for(i = 0; i < row; i++)
       for(j = 0; j < col; j++)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < row; i++)
       for(j = 0; j < col; j++)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    for(i = 0; i < row; ++i)
        for(j = 0; j < col; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < row; ++i)
        for(j = 0; j < col; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == col - 1)
                cout << endl;
        }

    return 0;
}