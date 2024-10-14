///Be cho vang
// 2 for long nhau
// for i=0 --> n
//  for j=i+1 --> n
// bi TLE

// xem sol

// mindset giong quy hoahc dong (tham lam)
// di tu 2 dau vao
// sao cho moi buoc thu hep cho ra ket qua toi uu nhat 

// di tu 2 dau trai phai vao
// tk nao lun hon thi tien vo
// vi no lun hon va no tien vo thi 
    //neu cot no tien vao lun hon hay thap hon thi minh van xet duoc 
    // vi no co cai cot cao hon ben kia

// neu cho tk cao hon tien vo thi 
    // ma no gap cot thap hon thi no se lo, ko lay duoc area toi da



#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();


        int maxArea=INT_MIN;

        int l = 0;
        int r= n-1;
        
        while (l<r){
            int x=min(height[l], height[r]);
            int y=abs(l-r);
            maxArea=max(maxArea,x*y);
            
            if (height[l]<height[r])
                l++;
            else //if (height[l]>=height[r])  : = thi sao cung duoc
                r--;
        }



        return maxArea;

    }
};

signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    vector <int> height;

    int n; cin>>n;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        height.push_back(x);
    }



    Solution s;
    int ans= s.maxArea(height);
    cout<<ans;

    return 0;
}
