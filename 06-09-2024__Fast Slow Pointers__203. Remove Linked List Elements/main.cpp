///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;


struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

const int N_max = 1e4+5;

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        // remove val at begin
        while (head!=NULL and head->val==val){
            head=head->next;
        }

        ListNode *start = new ListNode(0);
        start->next = head;


        ListNode *s = start; //slow
        ListNode *f = start; //fast


        while (s->next != NULL ){
            
            f=s->next;
            
            if (f->val == val){
                while (f!=NULL and f->val == val) 
                    f=f->next;
                s->next = f;
                s=s->next;
            }
            else{
                s->next = f;
                s=s->next;
            }
            
            


            if (s==NULL) break;
        }
        
        return head;
    }
};

signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);

    int n; cin>>n;

    int x; 
    vector <int> a;
    while (cin>>x){
        a.push_back(x);
    }

    ListNode * head;
    if (a.size()>0){
        head = new ListNode (a[0]);
    
        ListNode *k = head ;
        for (int i=1;i<a.size();i++){
            ListNode *tmp = new ListNode(a[i]);
            k->next = tmp;
            k = tmp;
        }
        k->next = NULL;
    }
    else{
        head = NULL;
    }
    
    
    


    Solution s;
    ListNode *ans= s.removeElements(head, n);
    ListNode *tmp = ans;
    while (tmp!=NULL){
        cout<<tmp->val<<' ';
        tmp=tmp->next;
    }
    cout<<endl;
    cout<<n<<endl;

    return 0;
}
