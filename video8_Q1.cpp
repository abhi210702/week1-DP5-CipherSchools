#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr)
{
    int n = arr.size();

    if (n == 0 || n == 1)
        return;
    int start = 0;
    int end = n - 1;
    int i = 0;
    while (i <= end)
    {
        if (arr[i] == 2)
        {
            swap(arr[i], arr[end]);
            end--;
        }

        else if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            i++;
            start++;
        }

        else
            i++;
    }
}

int main()
{

    vector<int> arr = {0, 1, 1, 1, 2, 2, 0, 1, 0};
    sort012(arr);
    cout << "sorted array is " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}