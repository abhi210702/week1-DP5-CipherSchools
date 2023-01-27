#include <bits/stdc++.h>
using namespace std;

void merge_sorted_arrays(vector<int> &arr1, int m, vector<int> &arr2, int n)
{
    int size1 = arr1.size(), size2 = arr2.size();
    int k = m + n - 1, j = n - 1, i = m - 1;

    while (i >= 0 && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            arr1[k] = arr1[i];
            i--;
            k--;
        }
        else
        {
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }

    while (j >= 0)
    {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}

int main()
{

    vector<int> arr = {5, 7, 9, 12, 0, 0, 0, 0, 0};
    vector<int> arr2 = {1, 2, 6, 9, 32};

    merge_sorted_arrays(arr, 4, arr2, 5);

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}