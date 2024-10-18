///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

void set_up_map(map <char, int> &hm, string s){
    for (auto x: s) hm[x]=-1;
}

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;

        int n= s.size();
        int length=0;
        
        //set up map
        map <char, int> set_up;
        set_up_map(set_up, s);

        map <char, int> hm;
        hm=set_up;

        int i=0;
        while (i!=n){
            if (hm[s[i]]==-1){
                length++;
                ans=max(ans,length);
                hm[s[i]]=i;
                i++;
            }
            else{
                i=hm[s[i]]+1;
                length=0;
                hm=set_up;
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
    string str;
    cin>>str;

    Solution s;
    int ans= s.lengthOfLongestSubstring(str);
    cout<<ans;

    return 0;
}
