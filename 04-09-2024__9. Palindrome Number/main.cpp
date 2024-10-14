///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s= to_string(x);
        int n=s.size();
        
        bool check=true;
        for (int i=0;i<n/2;i++){
            if (s[i]!=s[n-i-1])
                check=false; 
        }


        return check;
    }
};


signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    int x;
    cin>>x;

    Solution s;
    bool ans= s.isPalindrome(x);
    cout<<ans;


    return 0;
}
