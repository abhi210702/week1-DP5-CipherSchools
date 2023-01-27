#include <bits/stdc++.h>
using namespace std;

int firstIndex(vector<int> arr, int left, int right, int target)
{
    int ans1 = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            ans1 = mid;
            right = mid - 1;
        }
        else if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return ans1;
}

int LastIndex(vector<int> arr, int left, int right, int target)
{
    int ans1 = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            ans1 = mid;
            left = mid + 1;
        }
        else if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return ans1;
}

vector<int> findOccurancesIndex(vector<int> &arr, int target)
{
    int left = firstIndex(arr, 0, arr.size() - 1, target);
    int right = LastIndex(arr, left, arr.size() - 1, target);

    return {left, right};
}

int main()
{

    vector<int> arr = {1, 2, 2, 2, 3, 4, 4, 5, 7};
    vector<int> res = findOccurancesIndex(arr, 4);
    cout << res[0] << " " << res[1];

    return 0;
}