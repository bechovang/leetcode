///Be cho vang

//slide window
// size of slide window from n to 1


#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int minn=INT_MAX;

        //prefix sum
        vector<int> pf;
        pf.resize(n+1);
        


        for (int sz=0;sz<n;sz++){
            for (int i=0;i< n-sz ;i++){
                //sum
                int sum=0;
                for (int k=i;k<= i+sz; k++ ){
                    sum=sum+nums[k];
                }
                if (sum>=target)
                    minn=min(minn, sz+1);
            }
        }

        if (minn==INT_MAX) return 0;
        return minn;
    }
};


signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    vector<int> nums;
    int target;

    cin>>target;
    int x;
    while (cin>>x){
        nums.push_back(x);
    }


    

    Solution s;
    int ans= s.minSubArrayLen(target,nums);
    cout<<ans;

    return 0;
}
