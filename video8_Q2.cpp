#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int column = matrix[0].size();
    bool firstRow = false, firstCol = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == 0)
            {
                if (i == 0)
                    firstRow = true;
                if (j == 0)
                    firstCol = true;
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < column; j++)
        {
            if (matrix[0][j] == 0 || matrix[i][0] == 0)
                matrix[i][j] = 0;
        }
    }

    if (firstRow)
    {
        for (int i = 0; i < column; i++)
        {
            matrix[0][i] = 0;
        }
    }

    if (firstCol)
    {
        for (int i = 0; i < row; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> arr = {
        {1, 1, 1},
        {0, 1, 1},
        {1, 0, 1}};

    setZeroes(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}