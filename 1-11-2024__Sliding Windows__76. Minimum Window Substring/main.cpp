///Be cho vang

// 2 pointer from 2 side
// sliding window 
    // need check map
    // => n^2 => TLE

//linear i,j sliding
// check map_window is valid t(ABC) by map
// valid : map_window is valid t(ABC)
// invalid => j++
// valid => i++

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define int long long
using namespace std;



class Solution {
public:
    string minWindow(string s, string t) {
        // Nếu s nhỏ hơn t thì không có đáp án
        if (s.size() < t.size()) return ""; 

        string ans="";

        //linear i,j sliding
        // check map_window is valid t(ABC) by map
        // valid : map_window is valid t(ABC)
        // invalid => j++
        // valid => i++
        
        vector<int> t_Map (256,0); //bảng mã ASCII mở rộng thì có 256 kí tự
        vector<int> current_Map (256,0);


        //set up t_Map 
        int require=0;
        for (auto x: t){
            if (t_Map[x]==0) require++;
            t_Map[x]++;
        }
        // //debug
        // for (int i=0;i<t_Map.size();i++){
        //     if (t_Map[i]>0)
        //         cout<<i<<endl;
        // }



        int n=s.size();
        int i=0;
        int j=0;

        int count=0;

        int s_ans=-1;
        int len_ans=-1;
        

        current_Map[s[j]]++;
        if (t_Map[s[j]] > 0){
            if (current_Map[s[j]] == t_Map[s[j]]){
                count++;
            }
        }
        if (count>=require){
            string tmp = s.substr(i,j-i+1);
            if (ans=="" or ans.size()>tmp.size())
                ans=tmp;
        }
        

        
        
        while (j<n){
            if (count<require){
                j++;
                current_Map[s[j]]++;

                if (t_Map[s[j]] > 0){
                    if (current_Map[s[j]] == t_Map[s[j]]){
                        count++;
                    }
                }

                continue;
            }
            else{ //==true
                if (len_ans==-1 or j-i+1 < len_ans){
                    s_ans=i;
                    len_ans=j-i+1;
                }
                    

                current_Map[s[i]]--;
                if (t_Map[s[i]] > 0){
                    if (current_Map[s[i]] < t_Map[s[i]]){
                        count--;
                    }
                }
                i++;

                continue;
            }

            j++;
        }


        if (len_ans!=-1)
            ans=s.substr(s_ans,len_ans);
        return ans;
    }
};


signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    string str1,str2;
    cin>>str1>>str2;

    Solution s;
    string ans= s.minWindow(str1, str2);
    cout<<ans;

    return 0;
}
