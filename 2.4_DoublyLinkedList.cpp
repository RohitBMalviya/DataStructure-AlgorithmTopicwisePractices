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

int main(){
    // Linked List First Node Created----------------------------------------------------
    Node *head = new Node(10);
    Node *tail = new Node(20);
    head->next = tail;
    tail->prev = head;
    cout << head->prev << endl;
    cout << head->data << endl;
    cout << head->next << endl;

    cout << tail->prev << endl;
    cout << tail->data << endl;
    cout << tail->next << endl;

    // Linked List Traversing and Printing-----------------------------------------------
    Print(head);
    return 0;
}