///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        
        int n=s.size();

        map <char, bool> hm;

        int i=0;
        int j=0;
        hm[s[j]]=true;

        while (j!=n){
            ans=max(ans, j-i+1);

            if (hm[s[j+1]]==true){
                hm[s[i]]=false;
                i++;
                
                if (i>j){ //new window
                    j=i;
                    hm[s[j]]=true;
                }
                continue;
            }

            j++;
            hm[s[j]]=true;
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
