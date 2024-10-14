///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int,bool> hm;
        for (int i=0;i<nums.size();i++){
            int x=nums[i];
            if (hm[x]==true)
                return true;
            else
                hm[x]=true;
        }

        return false;
    }
};


signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    vector <int> a;

    int n; cin>>n;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
    }

    Solution s;
    int ans= s.containsDuplicate(a);
    cout<<endl<<"dap an: "<<ans;
    return 0;
}
