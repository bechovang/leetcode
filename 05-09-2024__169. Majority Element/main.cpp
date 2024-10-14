///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int,int> hm;

        int n=nums.size();
        for (int i=0;i<n;i++){
            int k = nums[i];
            hm[k]++;
            if (hm[k]>n/2)
                return k;
        }

        return 0;
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
    int ans= s.majorityElement(a);
    cout<<ans;

    return 0;
}
