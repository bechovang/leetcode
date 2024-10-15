///Be cho vang

//sorted 

#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 // for i 
 // for j : count the length
    // 1 => keep
    // >1 => remove

    
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head==NULL) return head;
        if (head->next==NULL) return head;

        ListNode *i = head;
        ListNode *j = head;

        if (head->val == head->next->val){ //duplicate at begin
            ListNode *tmp = head->next;
            while (tmp != NULL and tmp->val == head->val){
                tmp=tmp->next;
            }
            head=tmp;
        } 

        if (head==NULL) return head;
        if (head->next==NULL) return head;

        while (i != NULL){
            if (i->next != NULL)
                if (i->val == i->next->val){ //duplicate
                    // find left
                    ListNode *l = head;
                    while (l->next != NULL and l->next->val != i->val){
                        l=l->next;
                    }
                    if (l->next != NULL){
                        //remove
                        int remove_val = l->next->val;
                        // find right
                        ListNode *r = l->next;
                            r=r->next;
                        
                        if (r->next != NULL){
                            r=r->next;

                            l->next=r;
                        }
                    }

                }

            i=i->next;
        }

        return head;
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
    cout<<ans;

    return 0;
}
