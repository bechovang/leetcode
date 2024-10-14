///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

int calculate_water(int i, int j, vector<int>height){
    int minn= min(height[i],height[j]);
    int dist= j-i-1;
    int sum_inside=0;
    for (int k=i+1;k<=j-1;k++){
        sum_inside+=min(minn,height[k]);
    }

    return max(0,(minn*dist) - sum_inside );
}


class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        
        int n=height.size();
        int i=0;
        int j=1;
        while (i<n-1 and j<n){
            int x=calculate_water(i,j,height);
            if (x>0){
                ans=ans+ x;

                int minn= min(height[i],height[j]);
                for (int k=i+1;k<=j-1;k++){
                    height[k]=minn;
                }
            }
            

            if (height[j]>height[i]){
                i=j;
                j=i+1;
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
