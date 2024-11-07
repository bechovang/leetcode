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

const int N_max = 100+5;

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *s = head;
        ListNode *f = head;

        int count=1;
        while (f!=NULL){

            if (count%2==0)
                s=s->next;

            f=f->next;

            count++;
        }

        return s;
        
    }
};

signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    
    //1 2 3 4 5  => 3
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* forth = new ListNode(4);
    ListNode* fifth = new ListNode(5);
    
    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = NULL;






    Solution s;
    ListNode* ans= s.middleNode(head);
    cout<<ans->val<<endl;

    return 0;
}
