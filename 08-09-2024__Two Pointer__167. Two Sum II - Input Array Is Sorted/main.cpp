///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int id1=0;
        int id2=numbers.size()-1;

        while (numbers[id1] + numbers[id2] != target){
            if (numbers[id1] + numbers[id2] < target)
                id1++;
            if (numbers[id1] + numbers[id2] > target)
                id2--;    
        }

        


        ans.push_back(id1+1);
        ans.push_back(id2+1);
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
    for (int i=0;i<n;i++){
        int x; cin>>x;
        nums.push_back(x);
    }
    cin>>target;

    //debug
    for (int i=0;i<n;i++){
        cout<<nums[i]<<' ';
    }
    cout<<endl;
    cout<<target;



    Solution s;
    vector<int> ans= s.twoSum(nums,target);
    cout<<endl<<"dap an: ";
    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }

    return 0;
}
