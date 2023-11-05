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
// This head node is global

Node *head = NULL;

// **************************Stack Operations Using Linked List************************
// --------------------------------------IsEmpty---------------------------------------
int isEmpty(){
    if(head==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
// --------------------------------------PeekorTop-------------------------------------
int peek(){
    if(isEmpty()){
        cout << "Stack is Empty" << endl;
        exit(1);
    }
    return head->data;
}

// --------------------------------------Push-------------------------------------------
void push(int data){
    Node *node = new Node(data);
    if(node==NULL){
        cout << "Stack is Empty" << endl;
    }
    else{
        node->next = head;
        head = node;
    }
}

// --------------------------------------Pop--------------------------------------------
int pop(){
    Node *temp = head;
    if(isEmpty()){
        cout << "Stack is Empty" << endl;
        exit(1);
    }
    else{
        int value = temp->data;
        head = head->next;
        free(temp);
        temp = NULL;
        return value;
    }
}

void Print(){
    if(isEmpty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}

int main(){
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data = pop();
    cout << data << endl;
    cout << peek() << endl;
    data = pop();
    cout << data << endl;
    Print();
    return 0;
}