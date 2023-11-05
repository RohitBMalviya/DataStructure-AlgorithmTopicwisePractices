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

void Print(Node *node){
    while(node!=NULL){
        cout << node->data << " ";
        node = node->next;
    }
}
int main(){
    // Linked List First Node Created----------------------------------------------------
    // Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // Linked List Traversing and Printing-----------------------------------------------
    // Node *head = new Node(1);
    // Node *node1 = new Node(2);
    // Node *node2 = new Node(4);

    // head->next = node1;
    // node1->next = node2;
    // node2->next = NULL;

    // Print(head);
    return 0;
}