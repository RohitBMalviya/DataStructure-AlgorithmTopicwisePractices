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

Node *rear = NULL;
Node *front = NULL;

// *****************************Queue Operations Using Linked List***************************
// --------------------------------------IsNull----------------------------------------
int isNull(){
    if(rear==NULL||front==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
// --------------------------------------Enqueue---------------------------------------
void Enqueue(Node *&front,int data){
    Node *node = new Node(data);
    Node *temp = front;
    if(front==NULL){
        front = node;
    }
    else{
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = node;
        rear = temp->next;
    }
}
// --------------------------------------Dequeue---------------------------------------
int Dequeue_front(){
    Node *temp = front;
    if(isNull()){
        cout << "Queue is Empty" << endl;
        exit(1);
    }
    int value = front->data;
    front = front->next;
    free(temp);
    temp = NULL;
    if(front==NULL){
        rear = NULL;
    }
    return value;
}
// --------------------------------------Front----------------------------------------
int frontside(){
    if(isNull()){
        cout << "Queue is Empty" << endl;
        exit(1);
    }
    int value = front->data;
    return value;
}
// --------------------------------------Rear-----------------------------------------
int rearend(){
    if(isNull()){
        cout << "Queue is Empty" << endl;
        exit(1);
    }
    int value = rear->data;
    return value;
}
void Print(Node *front){
    Node *temp = front;
    if(isNull()){
        cout << "Queue is Empty" << endl;
        exit(1);
    }
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// ********************************Queue Type Using Linked List************************
// Queue Type 1 - Input Restriction Queue:---------------------------------------------
// --------------------------------------Dequeue rear----------------------------------
// int Dequeue_front(){
//     Node *temp = front;
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     int value = front->data;
//     front = front->next;
//     free(temp);
//     temp = NULL;
//     if(front==NULL){
//         rear = NULL;
//     }
//     return value;
// }
// int Dequeue_rear(){
//     Node *temp = front;
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     int value = 0;
//     if(temp->next==NULL){
//         value = rear->data;
//         free(temp);
//         temp = NULL;
//         front = temp;
//         if(front==NULL){
//             rear = NULL;
//         }
//         return value;
//     }
//     else{
//         while(temp->next->next!=NULL){
//                 temp = temp->next;
//         }
//         value = rear->data;
//         rear = temp;
//         free(temp->next);
//         temp->next = NULL;
//         return value;
//     }
// }
// Queue Type 2 - Output Restriction Queue:--------------------------------------------
// --------------------------------------Enqueue front---------------------------------
// void Enqueue_rear(Node *&front,int data){
//     Node *node = new Node(data);
//     Node *temp = front;
//     if(front==NULL){
//         front = node;
//     }
//     else{
//         while(temp->next!=NULL){
//             temp = temp->next;
//         }
//         temp->next = node;
//         rear = temp->next;
//     }
// }
// void Enqueue_front(Node *&front,int data){
//     Node *node = new Node(data);
//     Node *temp = front;
//     if(front==NULL){
//         front = node;
//     }
//     else{
//         node->next = temp;
//         front = node;
//     }
// }
// Queue Type 3 - Circular Queue:------------------------------------------------------
// // --------------------------------------Enqueue---------------------------------------
// void Enqueue(Node *&front,int data){
//     Node *node = new Node(data);
//     Node *temp = front;
//     if(front==NULL){
//         front = node;
//         rear = node;
//         front->next = rear;
//     }
//     else{
//         while(temp->next!=front){
//             temp = temp->next;
//         }
//         node->next = rear->next;
//         temp->next = node;
//         rear = temp->next;
//     }
// }
// // --------------------------------------Dequeue---------------------------------------
// int Dequeue(){
//     Node *temp = front;
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     int value = front->data;
//     front = front->next;
//     if(front==rear->next){
//         front = NULL;
//         rear = NULL;
//     }
//     else{    
//         rear->next = front;
//     }
//     free(temp);
//     temp = NULL;
//     return value;
// }
// Queue Type 4 - Dequeue Queue:-------------------------------------------------------
// --------------------------------------Enqueue---------------------------------------
// void Enqueue_rear(Node *&front,int data){
//     Node *node = new Node(data);
//     Node *temp = front;
//     if(front==NULL){
//         front = node;
//     }
//     else{
//         while(temp->next!=NULL){
//             temp = temp->next;
//         }
//         temp->next = node;
//         node->prev = temp;
//         rear = temp->next;
//     }
// }
// void Enqueue_front(Node *&front,int data){
//     Node *node = new Node(data);
//     Node *temp = front;
//     if(front==NULL){
//         front = node;
//     }
//     else{
//         node->next = temp;
//         temp->prev = node;
//         front = node;
//     }
// }
// // --------------------------------------Dequeue---------------------------------------
// int Dequeue_front(){
//     Node *temp = front;
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     int value = front->data;
//     front = front->next;
//     if(front==NULL){
//         return value;
//     }
//     else{
//         front->prev = NULL;
//     }
//     free(temp);
//     temp = NULL;
//     if(front==NULL){
//         rear = NULL;
//     }
//     return value;
// }
// int Dequeue_rear(){
//     Node *temp = front;
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     int value = 0;
//     value = rear->data;
//     temp = rear;
//     rear = temp->prev;
//     free(temp);
//     temp = NULL; 
//     if(rear==NULL){
//         return value;
//     }
//     else{
//         rear->next = NULL;
//         return value;
//     }
// }
// // --------------------------------------Front----------------------------------------
// int frontside(){
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     int value = front->data;
//     return value;
// }

// Queue Type 5 - Priority Queue:---------------------------------------------------------
