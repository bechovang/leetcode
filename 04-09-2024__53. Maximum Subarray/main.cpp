///Be cho vang
// chia de tri, dp

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        

        return 0;
    }
};


signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    
    int n; cin>>n;

    vector<int> a;
    int x;
    for (int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    
    
    Solution s;
    int ans= s.maxSubArray(a);
    cout<<ans;

    return 0;
}
