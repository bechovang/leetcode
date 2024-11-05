///Be cho vang

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

const int N_max = 1e4+5;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

       if (head == NULL) return NULL;

        // //debug
        // ListNode *tmp;
        // tmp=head;
        // int anti_loop=0;
        // while (tmp!=NULL){
        //     cout<<tmp->val<<endl;
        //     tmp=tmp->next;
        //     anti_loop++;
        //     if (anti_loop>10) break;
        // }      


        ListNode *s = head ;
        ListNode *f = head->next;
        int i=-1;
        int j=-1; 
        while (s!=NULL and i<N_max){
            i++;
            j=i+1;
            while (f!=NULL and j<N_max){
                if (f==s){
                    return s;
                }
                f=f->next;
                j++;
            }
            s=s->next;
        }    
        return NULL;
    }
};

signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    
    ListNode *head = new ListNode (3);
    ListNode *second = new ListNode (2);
    ListNode *third = new ListNode (0);
    ListNode *forth = new ListNode (-4);

    head->next = second;
    second->next = third;
    third->next =  forth;
    forth->next = second;

    

    Solution s;
    ListNode *ans= s.detectCycle(head);
    cout<<ans->val;

    return 0;
}
