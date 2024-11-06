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

const int N_max = 30+5;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next==NULL) return NULL;
        
        ListNode *ans = head;

        ListNode *start = new ListNode (0);
        start->next = head;

        ListNode *s = start;
        ListNode *f = start;
        int i=0;
        int j=0;

        while (f->next!=NULL and j<N_max){
            

            

            
            j++;
            f=f->next;


            if (j-i == n+1){
                i++;
                s=s->next;
            }
        
        }

        // cout<<i<<' '<<j<<endl;

        if (s==start)
            return head->next;

        // if (n==1)
        //     f=NULL;

        ListNode *tmp =s->next->next; 
        s->next = tmp;

        // if (s==head and f->next==NULL)
        //     s->next = NULL;

        return ans;        
    }
};


signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    
    // //1 2 3 4 5 (2) => 1 2 3 5
    // ListNode* head = new ListNode(1);
    // ListNode* second = new ListNode(2);
    // ListNode* third = new ListNode(3);
    // ListNode* forth = new ListNode(4);
    // ListNode* fifth = new ListNode(5);
    
    // head->next = second;
    // second->next = third;
    // third->next = forth;
    // forth->next = fifth;
    // fifth->next = NULL;

    // int n=2;

    // //1 2 (1) => 1
    // ListNode* head = new ListNode(1);
    // ListNode* second = new ListNode(2);
    
    // head->next = second;
    // second->next = NULL;

    // int n=1;

    //1 2 (2) => 2
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    
    head->next = second;
    second->next = NULL;

    int n=2;




    Solution s;
    ListNode* ans= s.removeNthFromEnd(head, n);
    ListNode *tmp = ans;
    while (tmp!=NULL){
        cout<<tmp->val<<' ';
        tmp=tmp->next;
    }

    return 0;
}
