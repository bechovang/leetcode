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
        int k_max=k;

        int i=0;
        int j=0;
        if (nums[j]==0 and k>0){
            k--;
            ans++;
        }

        while (j<n){
            if (i==j and nums[i]==0 and k==0) {
                i++;
                j++;
                continue;
            }

            ans=max(ans, j-i+1);



            if (j+1<n and nums[j+1]==0 and k>0){
                j++;
                k--;
                continue;
            }

            if (j+1<n and k==0 and nums[j+1]==0){
                while (i<n and nums[i]!=0 ){
                    i++;
                } 
                
                if (k+1<=k_max)
                    k++;
                
                i++;

                j=max(i,j);
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
