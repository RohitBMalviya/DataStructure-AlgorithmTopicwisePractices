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
// Insertion at the Beginning----------------------------------------------
// void InsertionAtBeginning(Node *head,int data){
//     Node *node = new Node(data);
//     Node *temp = head->next;
//     node->next = temp;
//     node->prev = head;
//     temp->prev = node;
//     head->next = node;
// }

// Insertion at the End----------------------------------------------------
// void InsertionAtEnd(Node *&head,int data){
//     Node *node = new Node(data);
//     Node *temp = head->next;
//     node->next = temp;
//     node->prev = head;
//     temp->prev = node;
//     head->next = node;
//     // head->next = node;
//     head = node;
// }

// Insertion at the Any Position-------------------------------------------
// void InsertionAtAnyPosition(Node *&head, int data, int Position){
//     Node *node = new Node(data);
//     Node *temp = head->next;
//     if(Position==0){
//         node->next = temp;
//         node->prev = head;
//         temp->prev = node;
//         head->next = node;
//     }
//     else{
//         while(Position!=1){
//             temp = temp->next;
//             Position--;
//         }
//         if(temp==head){
//             // node->next = temp->next;
//             // node->prev = head;
//             // temp->next->prev = node;
//             // head->next = node;
//             head = node;
//         }
//         node->next = temp->next;
//         node->prev = temp;
//         temp->next->prev = node;
//         temp->next = node;
//     }
// }

// Deletion at the Beginning----------------------------------------------
// void DeletionAtBeginning(Node *head){
//     Node *temp = head->next;
//     head->next = temp->next;
//     temp->next->prev = head;
//     free(temp);
//     temp = NULL;
// }

// Deletion at the End----------------------------------------------------
// void DeletionAtEnd(Node *&head){
//     Node *temp = head->next;
//     head->prev->next = temp;
//     temp->prev = head->prev;
//     free(head);
//     head = temp->prev;
// }

// Deletion at the AnyPosition--------------------------------------------
// void DeletionAtAnyPosition(Node *&head, int Position){
//     Node *temp1 = head->next;
//     Node *temp2 = NULL;
//     if(Position==0){
//         head->next = temp1->next;
//         temp1->next->prev = head;
//         free(temp1);
//         temp1 = NULL;
//     }
//     else{
//         while(Position!=1){
//             temp1 = temp1->next;
//             Position--;
//         }
//         if(temp1==head){
//             head->prev->next = temp1->next;
//             head->next->prev = temp1->prev;
//             head = temp1->prev;
//             free(temp1);
//             temp1 = NULL;      
//         }
//         else{
//             temp2 = temp1->next;
//             temp2->next->prev = temp1;
//             temp1->next = temp2->next;
//             free(temp2);
//             temp2 = NULL;
//         }
//     }
// }

int main(){
    Node *head = new Node(1);
    head->prev = head;
    head->next = head;

    // *******************************Insertion********************************
    // Insertion at the Beginning----------------------------------------------
    // InsertionAtEnd(head,2);
    // InsertionAtEnd(head,3);
    // InsertionAtEnd(head,4);
    // Print(head);

    // Insertion at the End----------------------------------------------------
    // InsertionAtEnd(head,5);
    // Print(head);

    // Insertion at the Any Position-------------------------------------------
    // InsertionAtAnyPosition(head,0,5);
    // Print(head);

    // *******************************Deletion*********************************
    // Deletion at the Beginning----------------------------------------------
    // DeletionAtBeginning(head);
    // Print(head);

    // Deletion at the End----------------------------------------------------
    // DeletionAtEnd(head);
    // Print(head);

    // Deletion at the AnyPosition--------------------------------------------
    // DeletionAtAnyPosition(head,4);
    // Print(head);
    
    return 0;
}