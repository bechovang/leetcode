///Be cho vang

//sorted 

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

 // for i 
 // for j : count the length
    // 1 => keep
    // >1 => remove


// 2 for kt trung

    
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ans=NULL;
        ListNode *end=NULL;
        ListNode *i = head;
        ListNode *j = head;
        map<int,int> hm;

        while (i!=NULL){
            if (hm[i->val]>0) {
                i=i->next;
                continue; 
            }

            bool duplicate=false;
            if (i->next != NULL) {
                j=i->next;
                while (j!=NULL){
                    if (j->val == i->val){
                        duplicate=true;
                        hm[j->val]++;
                        break;
                    }
                    j=j->next;
                }
            }

            if (duplicate==false){
                if (ans==NULL){
                    ListNode *tmp = new ListNode;
                    tmp->val = i->val;
                    tmp->next = NULL;
                    ans=tmp;
                    end=ans;
                }
                else{
                    ListNode *tmp = new ListNode;
                    tmp->val = i->val;
                    tmp->next=NULL;
                    end->next=tmp;
                    end=end->next;
                }
            }

            i=i->next;
        }
        
        return ans;
    }
};

signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    
    //[1,2,3,3,4,4,5]
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(3);
    ListNode* fifth = new ListNode(4);
    ListNode* sixth = new ListNode(4);
    ListNode* seventh = new ListNode(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = nullptr;

    // //[1,1,1,2,3]
    // ListNode* head = new ListNode(1);
    // ListNode* second = new ListNode(1);
    // ListNode* third = new ListNode(1);
    // ListNode* fourth = new ListNode(2);
    // ListNode* fifth = new ListNode(3);

    // head->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = nullptr;


    //debug
    cout<<"debug : ";
    ListNode* tmp =head;
    while (tmp!=NULL){
        cout<<tmp->val<<' ';
        tmp=tmp->next;
    }
    cout<<endl;

    
    
    

    Solution s;
    ListNode* ans= s.deleteDuplicates(head);
    cout<<"dap an : ";
    tmp = ans;
    while (tmp!=NULL){
        cout<<tmp->val<<' ';
        tmp=tmp->next;
    }
    cout<<endl;


    return 0;
}
