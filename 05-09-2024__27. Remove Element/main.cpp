///Be cho vang
// Xóa phần tử
//     Cách 1: vt.pop_back(); //xóa phần tử cuối của vector
//     Cách 2: vt.erase(pos); //xóa 1 phần tử ở vị trí pos
//     Cách 3: vt.erase(first , last); //xóa phần tử từ vị trí first tới last
//     Cách 4: vt.clear(); //xóa tất cả phần tử trong vector
//** pos là con trỏ */

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i=0;
        while (i!=nums.size()){
            if (nums[i]==val){
                nums.erase(nums.begin()+i);
            }
            else{
                i++;
            }

        }

        for (int i=0;i<nums.size();i++){
            cout<<nums[i]<<endl;
        }

        int k=nums.size();
        return k;
    }
};


signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);

    vector<int> a;
    int val;

    int n; cin>>n;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
    }
    cin>>val;

    Solution s;
    int ans= s.removeElement(a,val);
    cout<<ans;

    return 0;
}
