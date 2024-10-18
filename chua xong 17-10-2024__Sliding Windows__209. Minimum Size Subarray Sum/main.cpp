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
        int ans=INT_MAX;

        int n=nums.size();
        int minn=INT_MAX;

        int i=0; 
        int j=0;
        int sum=nums[0];
        while (j!=n-1){
            if (sum>=target){
                ans=min(ans,j-i+1);
            }
            
            if(sum-nums[i] >= target){
                sum = sum-nums[i];
                i++;
                continue;
            }

            j++;
            sum=sum+nums[j];
        }

        while (i!=n-1){
            if(sum-nums[i] < target)
                break;
            sum = sum-nums[i];
            i++;
        }
        if (sum>=target){
            ans=min(ans,j-i+1);
        }

        if (ans==INT_MAX) return 0;
        return ans;
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
