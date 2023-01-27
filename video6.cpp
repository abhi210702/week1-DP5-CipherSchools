// trapping rain water

#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    vector<int> left(n);
    vector<int> right(n);
    int res = 0;

    left[0] = height[0];
    for (int i = 1; i < n - 1; i++)
    {
        left[i] = max(left[i - 1], height[i]);
    }

    right[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], height[i]);
    }

    for (int i = 1; i < n - 1; i++)
    {
        res = res + min(left[i], right[i]) - height[i];
    }

    return res;
}

int main()
{

    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    cout << "max water can be trapped : " << trap(arr) << " units";

    return 0;
}