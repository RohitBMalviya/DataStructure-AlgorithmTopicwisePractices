# include <iostream>
# include <bits/stdc++.h>
#define MAX 5
using namespace std;

int stack_arr[MAX];
int top = -1;
// *****************************Stack Operations Using Array***************************
// --------------------------------------IsFull----------------------------------------
int isFull(){
    if(top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

// --------------------------------------IsEmpty---------------------------------------
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

// --------------------------------------Push------------------------------------------
void push(int data){
    if(isFull()){
        cout << "Stack is Full" << endl;
        return;
    }
    top++;
    stack_arr[top] = data;
}

// --------------------------------------Pop-------------------------------------------
int pop(){
    if(isEmpty()){
        cout << "Stack is Empty" << endl;
        exit(1);
    }
    int value = stack_arr[top];
    top--;
    return value;
}

void Print(){
    if(top==-1){
        cout << "Stack is Empty" << endl;
        return;
    }
    for(int i=top;i>=0;i--){
        cout << stack_arr[i] << " ";
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    // int PopValue;
    // PopValue = pop();
    // PopValue = pop();
    Print();
    cout << endl;
    push(4);
    push(5);
    push(5);
    Print();
    return 0;
}