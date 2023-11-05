# include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node*next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
// Node *CircularSingleLinkedList(int data){
//     Node *tail = new Node(data);
//     tail->next = tail;
//     return tail;
// }
void Print(Node *head){
    if(head==NULL){
        cout << head << " ";
    }
    else{
        Node *tail = head->next;
        do{
            cout << tail->data << " ";
            tail = tail->next;
        }
        while(tail!=head->next);
    }
}
void InsertionAtBeginning(Node *&head,int data){
    Node *node = new Node(data);
    node->next = head->next;
    head->next = node;
}

int main(){
    Node *head = new Node(1);
    // head = CircularSingleLinkedList(1);
    head->next = head;
    Print(head);
    cout << endl;
    
    // Node *head = new Node(1);
    // head->next = head;
    // Print(head);
    // cout << endl;

    InsertionAtBeginning(head,2);
    InsertionAtBeginning(head,3);
    Print(head);

    return 0;
}