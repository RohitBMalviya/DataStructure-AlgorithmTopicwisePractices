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
int Dequeue(){
    Node *temp = front;
    if(isNull()){
        cout << "Queue is Empty" << endl;
        exit(1);
    }
    int value = front->data;
    front = front->next;
    free(temp);
    temp = NULL;
    return value;
}

// // --------------------------------------Front----------------------------------------
int frontside(){
    if(isNull()){
        cout << "Queue is Empty" << endl;
        exit(1);
    }
    int value = front->data;
    return value;
}

// // --------------------------------------Rear-----------------------------------------
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

int main(){
    Enqueue(front,1);
    Enqueue(front,2);
    Enqueue(front,3);
    Enqueue(front,4);
    cout << "front: " << frontside() << endl;
    Enqueue(front,5);
    Print(front);
    Dequeue();
    Dequeue();
    cout << "front: " << frontside() << endl;
    Dequeue();
    Dequeue();
    cout << "Rear: " << rearend() << endl;
    Dequeue();
    cout << endl;
    Enqueue(front,1);
    Enqueue(front,2);
    Enqueue(front,3);
    Enqueue(front,4);
    Print(front);

    return 0;
}