///Be cho vang

// permutation : hoán vị, vẫn các chữ đó nhưng đổi vị trí

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false; // if s2 contains

        map<char,int> s1Map;
        for (int i=0;i<s1.size();i++){
            s1Map[s1[i]]++;
        }

        
        for (int i=0;i<s2.size()-s1.size()+1;i++){
            map<char,int> s2Map;
            for (int j=i;j<i+s1.size();j++){
                s2Map[s2[j]]++;
            }
            bool check=true;
            for (auto x: s2Map){
                char k=x.first;
                int i=x.second;
                if (s1Map[k] != i){
                    check=false;
                    break;
                }
            }

            if (check==true) return true;

        }
        return false;
    
    }
};


signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    string str1, str2;
    cin>>str1>>str2;

    Solution s;
    bool ans= s.checkInclusion(str1,str2);
    cout<<ans;

    return 0;
}
