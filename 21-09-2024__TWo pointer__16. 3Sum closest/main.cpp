///Be cho vang
// quay lai doc sol cua bai 15 : 3sum

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        if (nums.size()==3) return nums[0]+nums[1]+nums[2];

        int n=nums.size();
        int ans=-1;
        int distance_min=INT_MAX;
        sort(nums.begin(),nums.end());
        
        for (int i=0;i<n-2;i++){
            //if (i>0 and nums[i]==nums[i-1]) continue;

            int x=i+1;
            int y=n-1;

            while (x<y){
                
                int sum=nums[i] + nums[x] + nums[y];
                if (sum==target) return sum;
                else if (sum<target){
                    if ( abs(sum-target) < distance_min){
                        ans=sum;
                        distance_min = abs(sum-target);
                    }
                    x++;
                }
                else if (sum>target){
                    if ( abs(sum-target) < distance_min){
                        ans=sum;
                        distance_min = abs(sum-target);
                    }
                    y--;
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
    int target;

    int n; cin>>n;
    cin>>target;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        nums.push_back(x);
    }


    Solution s;
    int ans= s.threeSumClosest(nums,target);
    cout<<ans;

    return 0;
}
