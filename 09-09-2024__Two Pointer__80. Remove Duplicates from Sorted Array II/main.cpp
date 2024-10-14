///Be cho vang
// (1 point + erase)
#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        while (i<nums.size()-1){
            if (nums[i]==nums[i-1] and nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
            }
            else{
                i++;
            }
        }

        return nums.size();
    }
};

signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    vector <int> nums;

    int n; cin>>n;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        nums.push_back(x);
    }

    Solution s;
    int ans= s.removeDuplicates(nums);
    cout<<ans;

    return 0;
}
