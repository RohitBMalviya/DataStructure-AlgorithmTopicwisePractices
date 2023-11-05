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

// void Print(Node *head){
//     while(head!=NULL){
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// Insertion at the Beginning----------------------------------------------
// void InsertionAtBeginning(Node **head,int data){
//     Node *newnode = new Node(data);
//     newnode->next = *head;
//     *head = newnode;
// }

// Insertion at the End----------------------------------------------------
// void InsertingAtEnd(Node *head,int datas){
//     Node *endnode = new Node(datas);
//     endnode->next = NULL;
//     while(head->next!=NULL){
//         head = head->next;
//     }
//     head->next = endnode;   
// }

// Insertion at the Any Position-------------------------------------------
// void InsertingAnyPosition(Node *head,int datas,int Position){
//     Node *BetweenNode = new Node(datas);
//     while(Position!=1){
//         head = head->next;
//         Position--;
//     }
//     BetweenNode->next = head->next;
//     head->next = BetweenNode;
// }

// Deletion at the Beginning----------------------------------------------
// void DeletionAtBeginning(Node *&head){
//     Node * temp = head;
//     head = temp->next;
//     free(temp);
//     temp = NULL;
// }

// Deletion at the End----------------------------------------------------
// void DeletionAtEnd(Node *head){
//     Node * temp1 = head;
//     Node * temp2 = head;
//     while(temp1->next!=NULL){
//         temp2 = temp1;
//         temp1 = temp1->next;
//     }
//     temp2->next = NULL;
//     free(temp1);
//     temp1 = NULL; 
// }
// OR
// void DeletionAtEnd(Node *head){
//     Node * temp1 = head;
//     while(temp1->next->next!=NULL){
//         temp1 = temp1->next;
//     }
//     free(temp1->next);
//     temp1->next = NULL; 
// }

// Deletion at the AnyPosition--------------------------------------------
// void DeletionAtAnyPosition(Node *&head,int Position){
//     Node * Current = head;
//     Node * Previous = head;
//     if(Position==1){
//         head = Current->next;
//         free(Current);
//         Current = NULL;
//     }
//     else{
//         while(Position!=1){
//             Previous = Current;
//             Current = Current->next;
//             Position--;
//         }
//         Previous->next = Current->next;
//         free(Current);
//         Current = NULL;
//     }
// }

// Reversing Linked List-------------------------------------------------------
// void Reversing(Node *&head){
//     Node *Prev = NULL;
//     Node *Next = NULL;
//     while(head!=NULL){
//         Next = head->next;
//         head->next = Prev;
//         Prev = head;
//         head = Next;
//     }
//     head = Prev;
// }

// Sorting Insertion Linked List-----------------------------------------------
// void InsertionIntoSortedLinkedList(Node *&head,int data){
//     Node *node = new Node(data);
//     Node *temp = head;
//     if(temp->data>node->data){
//         node->next = temp;
//         head = node;
//     }
//     else{
//         while(temp->next!=NULL&&temp->next->data<node->data){
//             temp = temp->next;
//         }
//         node->next = temp->next;
//         temp->next = node;  
//     }
// }
int main(){
    // *******************************Insertion********************************
    // Node *head = new Node(2);
    // Node *nextnode1 = new Node(3);
    // Node *nextnode2 = new Node(4);
    // head->next = nextnode1;
    // nextnode1->next = nextnode2;
    // nextnode2->next = NULL;
    // Print(head);
    // cout << endl;
    
    // Insertion at the Beginning----------------------------------------------
    // InsertionAtBeginning(&head,1);
    // Print(head);

    // Insertion at the End----------------------------------------------------
    // InsertingAtEnd(head,4);
    // Print(head);

    // Insertion at the Any Position-------------------------------------------
    // InsertingAnyPosition(head,3,2);
    // Print(head);

    // *******************************Deletion*********************************
    // Deletion at the Beginning----------------------------------------------
    // DeletionAtBeginning(head);
    // Print(head);

    // Deletion at the End----------------------------------------------------
    // DeletionAtEnd(head);
    // Print(head);

    // Deletion at the AnyPosition--------------------------------------------
    // DeletionAtAnyPosition(head,Position);
    // Print(head);

    // *******************************Searching*********************************
    // Reversing(head);
    // Print(head);

    // Sorting Insertion Linked List--------------------------------------------
    // InsertionIntoSortedLinkedList(head,3);
    // Print(head);

    return 0;
}