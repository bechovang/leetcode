///Be cho vang
//Partition (phân vùng, sự chia cắt, phân chia)
// wrong reading
// after split, the appear of letter in each partition equal 

//  str. erase () // Xóa toàn bộ chuỗi
//  str. erase ( idx ) // Xóa tất cả các ký tự sau idx
//  str. erase (idx, k) // Xóa k ký tự sau idx
//  str. erase (itr) // Xóa ký tự tại itr
//  str. erase ( first, last ) // Xóa ký tự trong phạm vi [first, last)


// => sau khi chia xong, ký tự trong 1 phần, ko xuất hiện trong khác phần khác
#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

bool check_appear(char k, string s){
    for (int i=0;i<s.size();i++){
        if (k==s[i])
            return true;
    }
    return false;
}



class Solution {
public:
    vector<int> partitionLabels(string s) {

        vector <int> ans;
        
        int n=s.size();
        int x=0;
        int y=0;
        int i=0;
        int j=0;
        while (x<n){
            if (x==n-1){
                ans.push_back(1);
                x=y+1;
                y=x;
                continue;
            }
            bool check_appear=false;
            for (i=x; i<=y; i++){
                if (check_appear==false) 
                for (j=n-1; j>=y+1;j--){
                    if (s[i]==s[j]){
                        check_appear=true;
                        break;
                    }
                }
            }

            if (check_appear==true){
                y=j;
            }
            if (check_appear==false){
                ans.push_back(y-x+1);
                x=y+1;
                y=x;
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
    vector<int> ans= s.partitionLabels(str);
    cout<<endl<<"dap an: ";
    for (auto x : ans){
        cout<<x<<' ';
    }

    return 0;
}
