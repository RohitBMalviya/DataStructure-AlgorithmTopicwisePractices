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
// Insertion at the Beginning----------------------------------------------
// void InsertionAtBeginning(Node *&head,int data){
//     Node *node = new Node(data);
//     node->next = head->next;
//     head->next = node;
// }

// Insertion at the End----------------------------------------------------
// void InsertionAtEnd(Node *&head,int data){
//     Node *node = new Node(data);
//     node->next = head->next;
//     head->next = node;
//     head = head->next;
// }

// Insertion at the Any Position-------------------------------------------
// void InsertionAtAnyPosition(Node *&head,int data,int Position){
//     Node *node = new Node(data);
//     Node *temp = head->next;
//     if(Position==0){
//         node->next = head->next;
//         head->next = node;
//     }
//     else{
//         while(Position!=1){
//             temp = temp->next;
//             Position--;
//         }
//         if(temp==head){
//             node->next = head->next;
//             head->next = node;
//             head = head->next;
//         }
//         else{
//             node->next = temp->next;
//             temp->next = node;
//         }
//     }
// }

// Deletion at the Beginning----------------------------------------------
// void DeletionAtBeginning(Node *&head){
//     Node *temp = NULL;
//     if(head==NULL){
//         temp = NULL;
//     }
//     else{
//         if(head->next==head){
//             free(head);
//             head = NULL;
//         }
//         else{
//             temp = head->next;
//             head->next = temp->next;
//             free(temp);
//             temp = NULL;
//         }
//     }
// }

// Deletion at the End----------------------------------------------------
// void DeletionAtEnd(Node *&head){
//     if(head==NULL){
//         head ==NULL;
//     }
//     else{
//         Node *temp = head->next;
//         if(head->next==head){
//             free(head);
//             head = NULL;
//         }
//         else{
//             while(temp->next!=head){
//                 temp = temp->next;
//             }
//             temp->next = head->next;
//             free(head);
//             head=temp;
//         }
//     }
// }

// Deletion at the AnyPosition--------------------------------------------
// void DeletionAtAnyPosition(Node *&head,int Position){
//     if(head==NULL){
//         head = NULL;
//     }
//     else{
//         if(head->next==head){
//             free(head);
//             head=NULL;
//         }
//         else{
//             Node *temp1 = head;
//             Node *temp2 = NULL;
//             if(Position==1){
//                 temp1 = head->next;
//                 head->next = temp1->next;
//                 free(temp1);
//                 temp1 = NULL;
//             }
//             else{
//                 while(Position!=1){
//                     temp1 = temp1->next;
//                     temp2 = temp1;
//                     Position--;
//                 }
//                 if(temp1->next==head){
//                     temp1->next = head->next;
//                     free(head);
//                     head = temp1;
//                 }
//                 else{
//                     temp1 = temp1->next;
//                     temp2->next = temp1->next;
//                     free(temp1);
//                     temp1 = NULL;
//                 }
//             }
//         }
//     }
// }

// int Searching(Node *head,int tofind){
//     int index = 0;
//     Node *temp = head->next;
//     do{
//         if(temp->data ==tofind){
//             return index;
//         }
//         index++;
//         temp = temp->next;
//     }
//     while(temp!=head->next);
//     return -1;
// }

int main(){
    // Node *head = new Node(1);s
    // head->next = head;
    // Print(head);
    // cout << endl;
    
    // Node *head = new Node(1);
    // head->next = head;
    // Print(head);
    // cout << endl;

    // *******************************Insertion********************************
    // Insertion at the Beginning----------------------------------------------
    // InsertionAtBeginning(head,2);
    // InsertionAtBeginning(head,3);
    // Print(head);

    // Insertion at the End----------------------------------------------------
    // InsertionAtEnd(head,4);
    // Print(head);

    // Insertion at the Any Position-------------------------------------------
    // InsertionAtAnyPosition(head,0,2);
    // Print(head);

    // *******************************Deletion*********************************
    // Deletion at the Beginning----------------------------------------------
    // DeletionAtBeginning(head);
    // Print(head);

    // Deletion at the End----------------------------------------------------
    // DeletionAtEnd(head);
    // Print(head);

    // Deletion at the AnyPosition--------------------------------------------
    // DeletionAtAnyPosition(head,5);
    // Print(head);

    // Seaching The Element--------------------------------------------
    // cout << Searching(head,1) << endl;
    

    return 0;
}