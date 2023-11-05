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
    Node *temp = head->next;
    do{
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp!=head->next);
}
void CircularDoublyLinkedListInput(Node *&head,int data){
    Node *node = new Node(data);
    if (head==NULL){
        head=node;
        head->prev = node;
        head->next = node;
    }
    else{
        Node *temp = head->next;
        node->next = temp;
        node->prev = head;
        temp->prev = node;
        head->next = node;
    }
}

int main(){
    Node *head = NULL;
    cout << endl;
    CircularDoublyLinkedListInput(head,1);
    CircularDoublyLinkedListInput(head,2);
    CircularDoublyLinkedListInput(head,3);
    CircularDoublyLinkedListInput(head,4);
    Print(head);
    cout << endl;
    return 0;
}