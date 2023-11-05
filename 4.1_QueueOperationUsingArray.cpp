# include <iostream>
# define MAX 5
using namespace std;
int queue[MAX];
int rear = -1;
int front = 0;

// *****************************Queue Operations Using Array***************************
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
    if(rear==-1){
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
    // for(int i=front;i<rear;i++){
    //     cout << queue[i];
    // }
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

int main(){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    cout << rearend() << endl;
    Enqueue(5);
    cout << rearend() << endl;
    Enqueue(6);
    cout << rearend() << endl;

    Print();
    cout << endl;
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    cout << rearend() << endl;
    cout << frontside() << endl;
    Dequeue();
    cout << frontside() << endl;
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    return 0;
}