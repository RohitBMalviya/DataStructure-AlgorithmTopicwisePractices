# include <iostream>
using namespace std;

class Node{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int data){
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};
void Print(Node *head){
    while(head!=NULL){
        cout << head->data << endl;
        head = head->next ;
    }
}

// void Push(Node *&head,int data){
//     Node *node = new Node(data);
//     Node *tail = head;
//     if(head==NULL){
//         head=node;
//     }
//     else{
//         while(tail->next!=NULL){
//             tail = tail->next;
//         }
//         tail->next = node;
//         node->prev = tail;
//     }
// }

// void Push(Node *&head,int data){
//     Node *node = new Node(data);
//     if(head==NULL){
//         head = node;
//     }
//     else{
//         node->next = head;
//         head->prev = node;
//         head = node;
//     }
// }
int main(){
    // Node *head = NULL;
    // int data;
    // for(int i=0;i<5;i++){
    //     cin >> data;
    //     Push(head,data);
    // }

    // Print(head);
    return 0;
}