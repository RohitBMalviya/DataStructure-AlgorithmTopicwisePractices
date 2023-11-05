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

// void Print(Node *head){
//     while(head!=NULL){
//         cout << head->data << endl;
//         head = head->next ;
//     }
// }

// Insertion at the Beginning----------------------------------------------
// void InsertionAtBeginning(Node *&head,int data){
//     Node *node = new Node(data);
//     node->next = head;
//     head->prev = node;
//     head = node;
// }

// Insertion at the End----------------------------------------------------
// void InsertionAtEnd(Node *head,int data){
//     Node *node = new Node(data);
//     while(head->next != NULL){
//         head = head->next;
//     }
//     head->next = node;
//     node->prev = head;
// }

// Insertion at the Any Position-------------------------------------------
// void InsertionAtAnyPositionAfter(Node *&head,int data,int position){
//     Node *node = new Node(data);
//     Node *temp1 = head;
//     Node *temp2 = NULL;
//         while(position!=1){
//             temp1 = temp1->next;
//             position--;
//         }
//         if(temp1->next==NULL){
//             temp1->next = node;
//             node->prev = temp1;
//         }
//         else{
//             temp2 = temp1->next;
//             node->next = temp2;
//             temp2->prev = node;
//             node->prev = temp1;
//             temp1->next = node;
//         } 
// }
// OR
// void InsertionAtAnyPositionBefore(Node *&head,int data,int position){
//     Node *node = new Node(data);
//     Node *temp1 = head;
//     Node *temp2 = NULL;
//     if(position==1){
//         node->next = head;
//         head->prev = node;
//         head=node;
//     }
//     else{
//         while(position>2){
//             temp1 = temp1->next;
//             position--;
//         }
//         if(temp1->next==NULL){
//             temp1->next = node;
//             node->prev = temp1;
//         }
//         else{
//             temp2 = temp1->next;
//             node->next = temp2;
//             temp2->prev = node;
//             node->prev = temp1;
//             temp1->next = node;
//         }
//     }
// }

// Deletion at the Beginning----------------------------------------------
// void DeletionAtBeginning(Node *&head){
//     Node *temp = head;
//     head = temp->next;
//     head->prev = NULL;
//     free(temp);
//     temp = NULL;
// OR
//     head = head->next;
//     free(head->prev);
//     head->prev = NULL;
// }

// Deletion at the End----------------------------------------------------
// void DeletionAtEnd(Node *head){
//     Node *temp1 = head;
//     Node *temp2 = NULL;
//     while(temp1->next!=NULL){
//         temp1 = temp1->next;
//     }
//     temp2= temp1->prev;
//     temp2->next = NULL;
//     free(temp1);
//     temp1 = NULL;
// }

// Deletion at the AnyPosition--------------------------------------------
// void DeletionAtAnyPosition(Node *&head,int Position){
//     Node *temp1 = head;
//     Node *temp2 = NULL;
//     if(Position==1){
//         head = head->next;
//         free(head->prev);
//         head->prev = NULL;
//     }
//     else{
//         while(Position!=1){
//             // temp2 = temp1;               //same
//             temp1 = temp1->next;
//             Position--;
//         }
//         if (temp1->next==NULL){
//             temp2 = temp1->prev;
//             temp2->next = NULL;
//             free(temp1);
//             temp1 = NULL;
//         }
//         else{
//             temp2 = temp1->prev;                 //same
//             temp2->next = temp1->next;
//             temp1->next->prev = temp2;
//             free(temp1);
//             temp1 = NULL;
//         }
//     }
// }

// Reversing Linked List-------------------------------------------------------
// void Reversing(Node *&head){
//     Node *temp1 = head;
//     Node *temp2 = NULL;
//     temp2 = temp1->next;
//     temp1->prev = temp2;
//     temp1->next = NULL;
//     while(temp2!=NULL){
//         temp2->prev = temp2->next;
//         temp2->next = temp1;
//         temp1 = temp2;
//         temp2 = temp2->prev;
//     }
//     head = temp1;
// }
int main(){
    // *******************************Insertion********************************
    // Node *head = new Node(1);
    // Node *Node1 = new Node(2);
    // Node *Node2 = new Node(3);
    // Node *Node3 = new Node(4);
    // head->next = Node1;
    // Node1->next = Node2;
    // Node2->next = Node3;
    // Node1->prev = head;
    // Node2->prev = Node1;
    // Node3->prev = Node2;
    // Print(head);
    // cout << endl;

    // Insertion at the Beginning----------------------------------------------
    // InsertionAtBeginning(head,20);
    // Print(head);

    // Insertion at the End----------------------------------------------------
    // InsertionAtEnd(head,20);
    // Print(head);

    // Insertion at the Any Position-------------------------------------------
    // InsertionAtAnyPositionAfter(head,12,2);
    // Print(head);
    // InsertionAtAnyPositionBefore(head,12,p);
    // Print(head);

    // *******************************Deletion*********************************
    // Deletion at the Beginning----------------------------------------------
    // DeletionAtBeginning(head);
    // Print(head);

    // Deletion at the End----------------------------------------------------
    // DeletionAtEnd(head);
    // Print(head);

    // Deletion at the AnyPosition--------------------------------------------
    // DeletionAtAnyPosition(head,2);
    // Print(head);

    // Reversing Linked List--------------------------------------------------
    // Reversing(head);
    // Print(head);
    return 0;
}