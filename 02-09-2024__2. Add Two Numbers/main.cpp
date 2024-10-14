/******************************************************************************
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

/*
-----------------------------------------------------------------------------------------------------

 link list nC3 gia;ng ca;ng dC"y xC-ch, lC:c mC,nh tra; vC o dC"y xC-ch
 lC  mC,nh tra; vC o cC!i node Da:'u tiC*n ca;'a dC"y xC-ch (xem la:!i cC!ch khai bC!o link list)

https://www.programiz.com/c-programming/c-pointers

https://www.programiz.com/c-programming/c-structures-pointers

https://www.programiz.com/dsa/linked-list

https://www.programiz.com/dsa/linked-list-operations

https://chatgpt.com/share/d7544538-b322-4b9e-b614-77193a30d1a8   (cC!c cC: phC!p va;i linked list - chatgpt 1)

https://chatgpt.com/share/bf6a77ed-6cbb-4ce6-a7ab-232c1da001e0 (chatgpt 2)




-----------------------------------------------------------------------------------------------------
INSERT AT HEAD

struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = head;
head = newNode;


1. TC!c da;%ng ca;'a dC2ng la;nh " newNode = malloc(sizeof(struct node)); " :
    DC2ng la;nh newNode = malloc(sizeof(struct node)); cC3 tC!c da;%ng ta:!o ra ma;t node ma;i trong danh sC!ch liC*n
ka:?t DF!n. NC3 ca:%p phC!t ma;t vC9ng nha; Da;' la;n Da; cha;)a ma;t Da;i tF0a;#ng struct node vC  gC!n Da;a cha;	 ca;'a vC9ng nha;
DC3 cho con tra; newNode.
    Na:?u khC4ng cC3 dC2ng la;nh nC y, newNode sa:= khC4ng tra; Da:?n ma;t vC9ng nha; ha;#p la;, vC  via;c truy ca:-p hay gC!n
da;/ lia;u cho newNode->data hoa:7c newNode->next sau DC3 sa:= gC"y ra la;i.

2. dC9ng malloc(sizeof(struct node)); ba; la;i
C	p kia;u: Ba:!n ca:'n C)p kia;u ka:?t qua:# ca;'a malloc ta;+ void* sang struct node*.
    Ca;% tha;, ba:!n nC*n sa;-a dC2ng malloc nhF0 sau:
        head = (struct node*)malloc(sizeof(struct node));
    Hoa:7c, na:?u ba:!n Dang dC9ng C++, cC3 tha; dC9ng new Da; ca:%p phC!t ba; nha; thay cho malloc nhF0 sau:
        head = new node;
-----------------------------------------------------------------------------------------------------
TRAVERSE A LINKED LIST

struct node *temp = head;
printf("\n\nList elements are - \n");
while(temp != NULL) {
  printf("%d --->",temp->data);
  temp = temp->next;
}


-----------------------------------------------------------------------------------------------------
*/


#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;



struct node {
	int data;
	struct node *next;
};

// la:%y ta;+ leetcode
class Solution {
public:
	struct node* addTwoNumbers( struct node* l1, struct node* l2) {

		struct node *ans;
		ans = new node;
		//ans = nullptr;

        struct node *last_node;
        last_node = new node;

		struct node *x= l1; //head1
		struct node *y= l2;//head2

		int cary = 0;

		while (x!=nullptr or y!=nullptr) {

			int a=0;
			int b=0;

			if (x!=nullptr) {
				a = x->data;
				x=x->next;
			}
			if (y!=nullptr) {
				b = y->data;
				y=y->next;
			}

			struct node *head_ans;
			head_ans = new node;

			head_ans->data=a+b;


			cary=(head_ans->data)/10;// them cai nho so
			head_ans->data=(head_ans->data)%10;
			ans->data=ans->data+cary;
            // cong vo truco ?

			head_ans->next = ans;


			ans = head_ans;


		}

        // xu li so 0 o last_node <=> xoa lien ket cua tk ke cuoi
        // <=> truy van den tk ke cuoi
        struct node *k;
        k = new node;
        k = ans;
        while (k->next->next != nullptr){
            k=k->next;
        }
        // k chinh la tk ke cuoi, last_node la tk cuoi
        if (last_node->data==0){
            k->next=nullptr;
        }
        
        
        
        


		return ans;
	}
};


signed main()
{
	faster;
	int n, m;
	cin >> n >> m;

	// ta:!o node Da:'u (tha:-t ra nC3 ban Da:'u lC  cua;i ra;i na;i da:'n nC3 chuya;n lC*n Da:'u)
	struct node *head;
	head = new node; // lC  ta:!o cho nC3 cC!i data vC  next
	head=nullptr;   // cho cC!i con tra; da:!ng node nC y lC  null lun

	// nha:-p input, sa;-a input cho ngF0a;#c la:!i
	struct node *head1;
	head1 = new node;
	head1=nullptr;

	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		struct node *l1;
		l1 = new node;
		l1->data=x;
		l1->next=head1;
		head1=l1; // ta:!o ma:/c xC-ch
	}

	struct node *head2;
	head2 = new node;
	head2=nullptr;
	for (int i=0; i<m; i++) {
		int y;
		cin >> y;
		struct node *l2;
		l2 = new node;
		l2->data=y;
		l2->next=head2;
		head2=l2;
	}




	// truy va:?t
	struct node *x;
	x = head1;
	struct node *y;
	y = head2;
	while (x!=nullptr or y!=nullptr) {
	    if (x!=nullptr) {
		    cout << "1." << x->data <<"   ";
		    x = x->next;
	    }
		if (y!=nullptr) {
    		cout << "2." << y->data <<"   ";
    		y = y->next;
		}
		cout<<endl;
	}

	Solution s;
	struct node *head_ans;
	head_ans = new node;
	head_ans = s.addTwoNumbers(head1,head2);
	while (head_ans != nullptr) {
		cout<<"ans."<<head_ans->data<<"  ";
		head_ans= head_ans->next;
	}



	return 0;
}



/*
#include <bits/stdc++.h>
#define endl '\n'
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

struct node {
    int data;
    struct node *next;
};

signed main() {
    faster;
    int n, m;
    cin >> n >> m;



    // Nha:-p dC#y sa; Da:'u tiC*n
    struct node *head1 = nullptr; // Kha;i ta:!o head lC  nullptr
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        struct node *l1 = (struct node*)malloc(sizeof(struct node)); // Ta:!o node ma;i
        l1->data = x;
        l1->next = head1;
        head1 = l1;
    }

    // Nha:-p dC#y sa; tha;) hai
    struct node *head2 = nullptr; // Kha;i ta:!o head lC  nullptr
    for (int i = 0; i < m; i++) {
        int y;
        cin >> y;
        struct node *l2 = (struct node*)malloc(sizeof(struct node)); // Ta:!o node ma;i
        l2->data = y;
        l2->next = head2;
        head2 = l2;
    }

    // In ra danh sC!ch liC*n ka:?t ta;+ head1
    struct node *current = head1;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // In ra danh sC!ch liC*n ka:?t ta;+ head2
    struct node *x = head2;
    while (x != nullptr) {
        cout << x->data << " ";
        x = x->next;
    }
    cout << endl;

    return 0;
}

*/
