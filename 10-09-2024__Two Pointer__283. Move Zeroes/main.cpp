///Be cho vang
//(1 point + erase)


#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int l=0;l<nums.size();l++){
            if (nums[l]==0){
                for (int r=l+1;r<nums.size();r++){
                    if (nums[r]!=0){
                        swap(nums[l],nums[r]);
                        break;
                    }
                }
            }
        }
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
    s.moveZeroes(nums);


    //in dap an
    cout<<endl;
    cout<<"dap an: ";
    for (int i=0;i<nums.size();i++){
        cout<<nums[i]<<' ';
    }

    return 0;
}
