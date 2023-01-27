#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &arr)
{
    reverse(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr[0].size(); j++)
        {
            if (i != j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    rotate(arr);

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