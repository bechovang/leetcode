///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (nums[j]<nums[i])
                    swap(nums[j],nums[i]);
            }
        }
    }
};


signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    vector <int> nums;
    
    int x;
    while (cin>>x){
        nums.push_back(x);
    }

    Solution s;
    s.sortColors(nums);

    for (auto k: nums){
        cout<<k<<' ';
    }
    
    return 0;
}
