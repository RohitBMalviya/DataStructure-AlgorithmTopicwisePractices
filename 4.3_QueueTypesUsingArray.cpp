# include <iostream>
# define MAX 5
using namespace std;
int queue[MAX];
int rear = -1;
int front = 0;

// ******************************Queue Operations Using Array**************************
// --------------------------------------IsFull----------------------------------------

int isFull(){
    if(rear==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

// --------------------------------------IsNull----------------------------------------
int isNull(){
    if(rear==-1&&front==0){
        return 1;
    }
    else{
        return 0;
    }
}

// --------------------------------------Enqueue---------------------------------------
void Enqueue(int data){
    if(isFull()){
        cout << "Queue is Full" << endl;
        return;
    }
    rear++;
    queue[rear] = data;
}

// --------------------------------------Dequeue---------------------------------------
int Dequeue(){
    if(isNull()){
        cout << "Queue is Empty" << endl;
        exit(1);
    }
    int value = queue[front];
    for(int i=front;i<rear+1;i++){
        queue[i-1] = queue[i];
    }
    for(int i=front;i<rear;i++){
        cout << queue[i];
    }
    cout <<endl;
    rear--;
    return value;
}

// --------------------------------------Front----------------------------------------
int frontside(){
    if(isNull()){
        cout << "Queue is Empty" << endl;
        exit(1);
    }
    return queue[front];
}

// --------------------------------------Rear-----------------------------------------
int rearend(){
    if(isNull()){
        cout << "Queue is Empty" << endl;
        exit(1);
    }
    return queue[rear];
}

void Print(){
    if(isNull()){
        cout << "Queue is Empty" << endl;
        exit(1);
    }
    for(int i=front;i<rear+1;i++){
        cout << queue[i] << " ";
    }
}

// ********************************Queue Type Using Array******************************
// Queue Type 1 - Input Restriction Queue:---------------------------------------------
// --------------------------------------Dequeue rear----------------------------------
// int Dequeue_rear(){
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     int value = queue[rear];
//     rear--;
//     cout << queue[rear] << endl;
//     return value;
// }
// int Dequeue_front(){
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     int value = queue[front];
//     for(int i=front;i<rear+1;i++){
//         queue[i-1] = queue[i];
//     }
//     // for(int i=front;i<rear;i++){
//     //     cout << queue[i];
//     // }
//     cout <<endl;
//     rear--;
//     return value;
// }

// Queue Type 2 - Output Restriction Queue:--------------------------------------------
// --------------------------------------Enqueue front---------------------------------
// void Enqueue_front(int data){
//     if(isFull()){
//         cout << "Queue is Full" << endl;
//         return;
//     }
//     rear++;
//     for(int i=rear;i>front;i--){
//         queue[i]=queue[i-1];
//     }
//     // for(int i=front;i<=rear;i++){
//     //     cout << queue[i];
//     // }
//     cout << endl;
//     queue[front] = data;
// }
// void Enqueue_rear(int data){
//     if(isFull()){
//         cout << "Queue is Full" << endl;
//         return;
//     }
//     rear++;
//     queue[rear] = data;
// }

// Queue Type 3 - Circular Queue:------------------------------------------------------
// // --------------------------------------IsFull----------------------------------------
// int isFull(){
//     if(rear==MAX-1&&front==0){
//         return 1;
//     }
//     else if(rear+1==front){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// // --------------------------------------IsNull----------------------------------------
// int isNull(){
//     if(front==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }

// }
// // --------------------------------------Enqueue---------------------------------------
// void Enqueue(int data){
//     if(isFull()){
//         cout << "Queue is Full" << endl;
//         return;
//     }
//     if(rear==MAX-1){
//         rear = -1;
//     }
//     if(front==-1){
//         front = 0;
//     }
//     rear++;
//     queue[rear] = data;
// }
// // --------------------------------------Dequeue---------------------------------------
// int Dequeue(){
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     if(front==-1){
//         front = 0;
//     }
//     int value = queue[front];
//     front++;
//     if(front==rear+1){
//         front = -1;
//         rear = -1;
//     }
//     return value;
// }
// void Print(){
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     if(rear>=front){
//         for(int i=front;i<=rear;i++){
//             cout << queue[i] << " ";
//         }
//     }
//     else{
//         for(int i=front;i<MAX;i++){
//             cout << queue[i] << " ";
//         }
//         for(int i=0;i<=rear;i++){
//             cout << queue[i] << " ";
//         }
//     }
// }

// Queue Type 4 - Dequeue Queue:-------------------------------------------------------
// --------------------------------------Enqueue front---------------------------------
// void Enqueue_front(int data){
//     if(isFull()){
//         cout << "Queue is Full" << endl;
//         return;
//     }
//     rear++;
//     for(int i=rear;i>front;i--){
//         queue[i]=queue[i-1];
//     }
//     queue[front] = data;
// }
// // --------------------------------------Enqueue---------------------------------------
// void Enqueue_rear(int data){
//     if(isFull()){
//         cout << "Queue is Full" << endl;
//         return;
//     }
//     rear++;
//     queue[rear] = data;
// }
// int Dequeue_rear(){
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     int value = queue[rear];
//     rear--;
//     cout << queue[rear] << endl;
//     return value;
// }
// // --------------------------------------Dequeue---------------------------------------
// int Dequeue_front(){
//     if(isNull()){
//         cout << "Queue is Empty" << endl;
//         exit(1);
//     }
//     int value = queue[front];
//     for(int i=front;i<rear+1;i++){
//         queue[i-1] = queue[i];
//     }
//     rear--;
//     return value;
// }

// Queue Type 5 - Priority Queue:---------------------------------------------------------

