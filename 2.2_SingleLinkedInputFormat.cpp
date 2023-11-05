# include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
// void Push(Node *&head,int data){
//     Node *nextnode = new Node(data);
//     nextnode->data = data;
//     nextnode->next = head;
//     head = nextnode;
// }
// void Push(Node *&head,int data){
//     Node *nextnode = new Node(data);
//     Node *tail = head;
//     if(head == NULL){
//         head = nextnode;
//     }
//     else{
//         while(tail->next!=NULL){
//             tail = tail->next;
//         }
//         tail->next = nextnode;
//     }
// }
// void Print(Node *head){
//     while(head!=NULL){
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

int main(){

    // Node *head = NULL;
    // int data;
    // for(int i=1;i<5;i++){
    //     cin >> data;
    //     Node *tail = new Node(data);
    //     tail->next = head;
    //     head = tail;
    // }
    // Print(head);

    // Node *head =NULL;
    // int data;
    // for (int i=0;i<5;i++){
    //     cin >> data;
    //     Puh(head,data);
    // }
    // Print(head);
    return 0;
}