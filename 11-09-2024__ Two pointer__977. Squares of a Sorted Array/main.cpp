///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

    class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            for (int i=0;i<nums.size();i++){
                nums[i]=nums[i]*nums[i];
            }
            sort(nums.begin(),nums.end());

            return nums;
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
    vector <int> ans= s.sortedSquares(nums);
    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }

    return 0;
}
