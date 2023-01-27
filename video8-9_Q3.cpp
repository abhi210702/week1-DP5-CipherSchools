// search in sorted rotated matrix

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &v, int target)
    {
        int low = 0;
        int high = v.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (v[mid] == target)
            {
                return mid;
            }
            else if (v[mid] >= v[low])
            { // first half is sorted
                if (target < v[mid] && target >= v[low])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else if (v[high] >= v[mid + 1])
            {
                if (target <= v[high] && target > v[mid])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main()
{

    return 0;
}