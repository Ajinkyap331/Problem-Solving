#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1};

    for (int i = 0; i < nums.size(); i++)
        while (nums[i] > 0 and nums[i] <= nums.size() and nums[nums[i] - 1] != nums[i])
            swap(nums[i], nums[nums[i] - 1]);

    for (int i = 0; i < nums.size(); ++i)
        if (nums[i] != i + 1)
            cout << i + 1;
    cout << nums.size();
}

//  -1, 1, 3, 4