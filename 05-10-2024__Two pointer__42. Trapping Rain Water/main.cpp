///Be cho vang
// water = min(maxL, maxR) - height[i]
// use 2 pointer
    // if R is higher L
    // put L to middle, and R can cover it

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;


class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        
        int L=0;
        int R=height.size()-1;
        int maxL=0;
        int maxR=0;

        while (L<=R){
            maxL = max(maxL, height[L]);
            maxR = max(maxR, height[R]);

            if (height[L]>=height[R]){
                ans=ans + max(0, (min(maxL,maxR) - height[R]));
                R--;
            } 
            else{
                ans=ans + max(0, (min(maxL,maxR) - height[L]));
                L++;
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
    vector <int> height;
    int x;
    while (cin>>x){
        height.push_back(x);
    }

    Solution s;
    int ans= s.trap(height);
    cout<<ans;

    cout<<endl;
    for (auto x : height)
        cout<<x<<' ';
    return 0;
}
