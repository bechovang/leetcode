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
        int n = nums.size();

        int i=0;
        int j=0;

        while (j<n){
            if (j==i and nums[i]!=0 and nums[i]!=0) // i,j at "0"
                ans=max(ans, j-i+1);
            if (j!=i)
                ans=max(ans, j-i+1);
            
            if (j+1<n and nums[j+1]==0){ //find new window
                i=j+1;
                while (i<n and nums[i]!=1)
                    i++;
                j=i;
                continue;
            }

            if (j==i and nums[i]==0 and nums[i]==0){ // i,j at "0"
                i=j+1;
                while (i<n and nums[i]!=1)
                    i++;
                j=i;
                continue;
            }

            j++;
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
