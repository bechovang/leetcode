///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //1
        if (nums.size()==1) return 1;

        int i=1;
        while (i!=nums.size()){
            if (nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
            }
            else{
                i++;
            }
        }



        //debug
        for (int i=0;i<nums.size();i++){
            cout<<nums[i]<<' ';
        }


        return nums.size();
    }
};

signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    vector <int> a;
    int x; 
    while (cin>>x){
        a.push_back(x);
    }
    

    Solution s;
    int ans= s.removeDuplicates(a);
    cout<<endl<<"dap an: "<<ans;

    return 0;
}
