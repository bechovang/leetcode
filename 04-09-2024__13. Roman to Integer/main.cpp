///Be cho vang
#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;


int Roman_to_int(char k){
    if (k=='I') return 1;
    else if (k=='V') return 5;
    else if (k=='X') return 10;
    else if (k=='L') return 50;
    else if (k=='C') return 100;
    else if (k=='D') return 500;
    else if (k=='M') return 1000;

    return 0;
}

int check_empty(vector<int> a){
    int n=a.size();
    int dem=0;
    for (int i=0;i<n;i++){
        if (a[i]>0) dem++;
    }
    if (dem>0) return false;
    else return true;
}


class Solution {
public:
    int romanToInt(string s) {
        
        //chuyển sang vector, chuyển số lun
        vector <int> a; 
        for (int i=0;i<s.size();i++){
            int x=Roman_to_int(s[i]);
            a.push_back(x);
        }

        int sum=0;
        while (check_empty(a)!=true){
            //tìm vt số nhỏ nhất
            int pos_min;
            int minn=INT_MAX;
            for (int i=0;i<a.size();i++){
                if (a[i]<minn and a[i]>0){
                    minn=a[i];
                    pos_min=i;
                }
            }

            // dồn qua phải
            bool check=false;
            for (int i=pos_min+1;i<a.size();i++){
                if (a[pos_min]<a[i] and a[i]>0){
                    a[i]=a[i]-a[pos_min];
                    a[pos_min]=0;
                    check=true;
                    break;
                }
            }
            if (check==false) {
                sum+=a[pos_min];
                a[pos_min]=0;
            }
        }

        

        




        return sum;
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
    int ans= s.romanToInt(str);
    cout<<"dap an: "<<ans;

    return 0;
}
