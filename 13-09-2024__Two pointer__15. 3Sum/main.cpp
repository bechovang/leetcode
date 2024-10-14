///Be cho vang
// xem sol
    // 1 for find first num (skip duplicate, use pointer (use for and continue))
    // 2 for (nested loop) find 2 nums remain
    // use hashmap instead 2 pointer in two sum all
    // hard map so hard to code, should use 2 pointer
#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

// void add_tripple(int x,int y, int z, vector<vector<int>> &a){ // & để tham chiếu đến cái mảng
//     vector<int> tripple;
//     tripple.push_back(x);
//     tripple.push_back(y);
//     tripple.push_back(z);
//     sort(tripple.begin(), tripple.end());

//     a.push_back(tripple);

// }
// // dungs push_back({1,2,3})

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());

        int n=nums.size();
        int num1=0;
        int num2=0;
        int num3=0;

        for (int i=0;i<n-2;i++){
            if (i>0 and nums[i]==nums[i-1])
                continue;
            num1=nums[i];

            //two sum
            // set up hashmap
            map<int,int> hm;
            for (int j=i+1;j<n;j++){
                hm[nums[j]]++;
            }

            for (int j=i+1;j<n;j++){
                if (j>i+1 and nums[j]==nums[j-1])
                    continue;
                
                num2=nums[j];
                num3 = 0 - num1 - num2;

                if (num3 != num2 and hm[num3]>0){
                    ans.push_back({num1,num2,num3});
                    hm[num3]--;
                }
                else if (num3 == num2 and hm[num3]>1){
                    ans.push_back({num1,num2,num3});
                    hm[num3]--;
                }
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
    
    int n; cin>>n;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        nums.push_back(x);
    }



    Solution s;
    vector<vector<int>> ans= s.threeSum(nums);

    for (int i=0;i<ans.size();i++){
        for (int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
