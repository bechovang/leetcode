///Be cho vang
// Binary search ko ra đâu
// dùng quy hoạch động dp[i][j] = max sum từ i --> j
// qhd ko được vì nó chỉ đc n^2
// lời giải: cách tư duy: cho nó cộng liên tục, lưu max, chỉ 
//khi tổng nó âm thì mới phải cắt 

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        int sum=0;
        for (int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            max_sum=max(max_sum,sum);
            if (sum<0) sum=0;
        }

        return max_sum;
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
    int ans= s.maxSubArray(a);
    cout<<endl<<"dap an: "<<ans;
    return 0;
}
