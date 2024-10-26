///Be cho vang

// xem sol
// valid : length - most appear character <= k
// invalid => l++

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;



class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;

        map <char,int> hm;
        int i=0;
        int j=0;
        hm[s[j]]++;
        int n=s.size();

        
        while (j<n){
            int length = j - i + 1;
            int most_char=0;
            for (auto x: hm){
                most_char=max(most_char,x.second);
            }

            if (length - most_char > k){
                hm[s[i]]--;
                i++;
                continue;
            }
            if (length - most_char <= k){
                ans=max(ans,length);
                j++;
                hm[s[j]]++;
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
    string str;
    int k;

    cin>>str;
    cin>>k;
    
    

    Solution s;
    int ans= s.characterReplacement(str,k);
    cout<<ans;

    return 0;
}

