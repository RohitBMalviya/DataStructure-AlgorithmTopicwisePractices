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
void Print(Node *head){
    Node *tail = head->next;
    do{
        cout << tail->data << " ";
        tail = tail->next;
    }
    while(tail!=head->next);
}

void CircularSingleLinkedListInput(Node *&head,int data){
    Node *node = new Node(data);
    if(head==NULL){
        head = node;
        head->next = head; 
    }
    else{
        node->next = head->next;
        head->next = node;
        head = head->next;
    }
}

int main(){
    Node *head = NULL;
    int data;
    for(int i=0 ;i<5;i++){
        cin >> data;
        CircularSingleLinkedListInput(head,data);
    }
    Print(head);


    return 0;
}