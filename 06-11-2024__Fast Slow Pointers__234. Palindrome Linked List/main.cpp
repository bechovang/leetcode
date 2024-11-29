///Be cho vang

// O(n) time and O(1) space
// reverse half-last with O(n/2) space
// slow poiter move  1 to n/2
// fast pointer move n/2 to n

// xem cái std reverse linked list

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


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode *s = head;
        ListNode *f = head;

        //find mid, slow = mid
        int n=0;
        while (s!=NULL and f!=NULL){
            n++;
            if (n%2==0)
                s=s->next;
            f=f->next;            
        }

        if (n%2==1)
            s=s->next;

        if (s==NULL) cout<<"slow NULL"<<endl;
        else cout<<"slow "<<s->val<<endl;
        if (f==NULL) cout<<"fast NULL"<<endl;
        else cout<<"fast "<<f->val<<endl;
        cout<<n<<endl;

        

        return false;
    }
};



signed main()
{
    faster;
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);


    //1 problem
    // ListNode *head = new ListNode (1);
    // ListNode *second = new ListNode (2);
    // ListNode *third = new ListNode (1);
    // ListNode *forth = new ListNode (2);
    // //ListNode *fifth = new ListNode (5);

    // head->next=second;
    // second->next=third;
    // third->next=forth;
    // forth->next=NULL;

    //2 test find mid
    ListNode *head = new ListNode (1);
    ListNode *second = new ListNode (2);
    ListNode *third = new ListNode (3);
    ListNode *forth = new ListNode (4);
    ListNode *fifth = new ListNode (5);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=NULL;

    //3 find mid
    // ListNode *head = new ListNode (1);
    // ListNode *second = new ListNode (2);
    // ListNode *third = new ListNode (3);
    // ListNode *forth = new ListNode (4);
    // ListNode *fifth = new ListNode (5);
    // ListNode *sixth = new ListNode (6);

    // head->next=second;
    // second->next=third;
    // third->next=forth;
    // forth->next=fifth;
    // fifth->next=sixth;
    // sixth->next=NULL;





    Solution s;
    int ans= s.isPalindrome(head);
    cout<<ans;

    return 0;
}
