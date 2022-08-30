#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums = {3,3};
    int target = 6;

    unordered_map <int, int> hash;

    for(int i = 0 ; i < nums.size(); i++){
        auto f = hash.find(target - nums[i]);
        if(f != hash.end()){
            cout << i << f->second;
            break;
        }
        hash[nums[i]] = i;
    }
}