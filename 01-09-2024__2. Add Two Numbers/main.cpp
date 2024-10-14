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

 link list nó giống cộng dây xích, lúc mình trỏ vào dây xích 
 là mình trỏ vào cái node đầu tiên của dây xích (xem lại cách khai báo link list)

https://www.programiz.com/c-programming/c-pointers

https://www.programiz.com/c-programming/c-structures-pointers

https://www.programiz.com/dsa/linked-list

https://www.programiz.com/dsa/linked-list-operations

https://chatgpt.com/share/d7544538-b322-4b9e-b614-77193a30d1a8   (các cú pháp với linked list - chatgpt 1)

https://chatgpt.com/share/bf6a77ed-6cbb-4ce6-a7ab-232c1da001e0 (chatgpt 2)




-----------------------------------------------------------------------------------------------------
INSERT AT HEAD

struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = head;
head = newNode;


1. Tác dụng của dòng lệnh " newNode = malloc(sizeof(struct node)); " :
    Dòng lệnh newNode = malloc(sizeof(struct node)); có tác dụng tạo ra một node mới trong danh sách liên 
kết đơn. Nó cấp phát một vùng nhớ đủ lớn để chứa một đối tượng struct node và gán địa chỉ của vùng nhớ 
đó cho con trỏ newNode.
    Nếu không có dòng lệnh này, newNode sẽ không trỏ đến một vùng nhớ hợp lệ, và việc truy cập hay gán 
dữ liệu cho newNode->data hoặc newNode->next sau đó sẽ gây ra lỗi.

2. dùng malloc(sizeof(struct node)); bị lỗi
Ép kiểu: Bạn cần ép kiểu kết quả của malloc từ void* sang struct node*.
    Cụ thể, bạn nên sửa dòng malloc như sau:
        head = (struct node*)malloc(sizeof(struct node));
    Hoặc, nếu bạn đang dùng C++, có thể dùng new để cấp phát bộ nhớ thay cho malloc như sau:
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


signed main()
{
    faster;
    int n, m; 
    cin >> n >> m;
    
    // tạo node đầu (thật ra nó ban đầu là cuối rồi nối dần nó chuyển lên đầu)
    struct node *head;
    head = new node;
    head=nullptr;   // cho cái con trỏ dạng node này là null lun
    
    // nhập input, sửa input cho ngược lại
    struct node *head1;
    head1 = new node;
    head1=nullptr; 
    
    for (int i=0;i<n;i++){
        int x; cin >> x;
        struct node *l1;
        l1 = new node;
        l1->data=x;
        l1->next=head1;
        head1=l1; // tạo mắc xích
    }
    
    struct node *head2;
    head2 = new node;
    head2=nullptr; 
    for (int i=0;i<m;i++){
        int y; cin >> y;
        struct node *l2;
        l2 = new node;
        l2->data=y;
        l2->next=head2;
        head2=l2;
    }
    
    // truy vết
    struct node *x;
    x = head1;
    while (x!=nullptr){
        cout << x->data <<" ";
        x = x->next;
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
    
    
    
    // Nhập dãy số đầu tiên
    struct node *head1 = nullptr; // Khởi tạo head là nullptr
    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        struct node *l1 = (struct node*)malloc(sizeof(struct node)); // Tạo node mới
        l1->data = x;
        l1->next = head1;
        head1 = l1;
    }
    
    // Nhập dãy số thứ hai
    struct node *head2 = nullptr; // Khởi tạo head là nullptr
    for (int i = 0; i < m; i++) {
        int y; 
        cin >> y;
        struct node *l2 = (struct node*)malloc(sizeof(struct node)); // Tạo node mới
        l2->data = y;
        l2->next = head2;
        head2 = l2;
    }

    // In ra danh sách liên kết từ head1
    struct node *current = head1;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    
    // In ra danh sách liên kết từ head2
    struct node *x = head2;
    while (x != nullptr) {
        cout << x->data << " ";
        x = x->next;
    }
    cout << endl;

    return 0;
}

*/
