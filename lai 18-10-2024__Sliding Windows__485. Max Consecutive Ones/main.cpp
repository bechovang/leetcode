///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;

        int dem=0;
        for (auto x: nums){
            if (x==1){
                dem++;
                ans=max(ans,dem);
            }
            else{
                dem=0;
            }
        }

        return ans;
    }
};


signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    vector<int> nums;

    int x;
    while(cin>>x){
        nums.push_back(x);
    }

    Solution s;
    int ans= s.findMaxConsecutiveOnes(nums);
    cout<<ans;

    return 0;
}
