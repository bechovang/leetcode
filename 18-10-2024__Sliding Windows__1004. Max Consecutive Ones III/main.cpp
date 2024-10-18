///Be cho vang

// more connect
//=> more consecutive 

//slide window
// flip consecutive => check max

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;




class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0;


        int n=nums.size();

        int start=0;
        while(start<n){
            //skip
            if (start > 0 && nums[start-1] == 1){
                while(nums[start]!=0 and start<n)
                    start++;
            }
            
            int i;
            int tmp=k;
            for (i=start;i<n;i++){
                //flip
                if (nums[i]==0 and tmp>0){
                    tmp--;
                    continue;
                }

                if (nums[i]==0){
                    break;
                }
            }

            ans=max(ans, i-start);                
        
            start++;
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
    int k;

    cin>>k;
    
    int x;
    while(cin>>x){
        nums.push_back(x);
    }

    Solution s;
    int ans= s.longestOnes(nums,k);
    cout<<ans;

    return 0;
}

// 2
// 1 1 1 0 0 0 1 1 1 1 0 

// 3
// 1 1 1 0 0 0 1 1 1 1 0
