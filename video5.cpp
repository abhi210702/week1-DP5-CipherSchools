#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> res;
    int rowStart = 0, colStart = 0, rowEnd = matrix.size() - 1, colEnd = matrix[0].size() - 1;

    while (rowStart <= rowEnd && colEnd >= colStart)
    {
        for (int i = colStart; i <= colEnd; i++)
        {
            res.push_back(matrix[rowStart][i]);
        }
        rowStart++;

        for (int i = rowStart; i <= rowEnd; i++)
        {
            res.push_back(matrix[i][colEnd]);
        }
        colEnd--;

        if (rowStart > rowEnd || colStart > colEnd)
        {
            break;
        }

        for (int i = colEnd; i >= colStart; i--)
        {
            res.push_back(matrix[rowEnd][i]);
        }
        rowEnd--;

        for (int i = rowEnd; i >= rowStart; i--)
        {
            res.push_back(matrix[i][colStart]);
        }
        colStart++;
    }

    return res;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> res = spiralOrder(arr);

    cout << "spiral order traversal of the given matrix is :" << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}