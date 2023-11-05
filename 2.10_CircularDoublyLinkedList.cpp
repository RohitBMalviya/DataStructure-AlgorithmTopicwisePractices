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
// Node *CircularDoublyLinkedList(int data){
//     Node *tail = new Node(data);
//     tail->prev = tail;
//     tail->next = tail;
//     return tail;
// }
void Print(Node *head){
    Node *tail = head;
    do{
        cout << tail->data << " ";
        tail = tail->next;
    }
    while(head!=tail->next);
}

int main(){
    // Node *head = NULL;
    // head = CircularDoublyLinkedList(1);
    // cout << head->data;

    Node *head = new Node(1);
    head->prev = head;
    head->next = head;
    cout << head->data;
    return 0;
}