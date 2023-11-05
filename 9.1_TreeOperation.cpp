# include <iostream>
# include <queue>
# include <stack>
using namespace std;

// class Tree{
// public:
//     int data;
//     Tree *left;
//     Tree *right;
//     Tree(int data){
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// class Queue{
// public:
//     Tree *data;
//     Queue *next;

//     Queue(Tree*data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Queue *Front = NULL;
// Queue *Rear = NULL;

// void Enqueue(Tree *root){
//     Queue * Newnode = new Queue(root);
//     if(Front==NULL||Rear==NULL){
//         Front = Rear = Newnode;
//     }
//     else{
//         Rear->next = Newnode;
//         Rear = Newnode;
//     }
// }

// Tree *Dequeue(){
//     Queue *tempqueue = Front;
//     Tree * value = tempqueue->data;
//     Front = Front->next;
//     free(tempqueue);
//     tempqueue = NULL;
//     return value;
// }

// *********************Traversing the Tree using BFS Level Order******************

// void TraverseBFSLevelOrder(Tree *&root){
//     Enqueue(root);
//     while(!(Front==NULL||Rear==NULL)){
//         Tree *temptree = Dequeue();
//         cout << temptree->data << endl;
//         if(temptree->left!=NULL){
//             Enqueue(temptree->left);
//         }
//         if(temptree->right!=NULL){
//             Enqueue(temptree->right);
//         }
//     }
// }

// void TraverseBFSLevelOrder(Tree *&root){
//     Enqueue(root);
//     Enqueue(NULL);
//     while(!(Front==NULL||Rear==NULL)){
//         Tree *temptree = Dequeue();
//         if(temptree==NULL){
//             cout << endl;
//             if(!(Front==NULL||Rear==NULL)){
//                 Enqueue(NULL);
//             }
//         }
//         else{
//             cout << temptree->data << " ";
//             if(temptree->left!=NULL){
//                 Enqueue(temptree->left);
//             }
//             if(temptree->right!=NULL){
//                 Enqueue(temptree->right);
//             }
//         }
//     }
// }

// void TraverseBFSLevelOrder(Tree *root){
//     queue<Tree*>q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         Tree *temptree = q.front();
//         q.pop();
//         if(temptree==NULL){
//             cout << endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout << temptree->data << " ";
//             if(temptree->left!=NULL){
//                 q.push(temptree->left);
//             }
//             if(temptree->right!=NULL){
//                 q.push(temptree->right);
//             }   
//         }
//     }
// }

// *********************Traversing the Tree using DFS Level Order******************
// class Stack{
// public:
//     Tree *data;
//     Stack *next;
//     Stack(Tree *data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Stack *Top = NULL;
// Stack *Top2 = NULL;

// --------------------------------------Push--------------------------------------
// void push(Tree *root){
//     Stack *Newnode = new Stack(root);
//     if(Top==NULL){
//         Top = Newnode;
//     }
//     else{
//         Newnode->next = Top;
//         Top = Newnode;
//     }
// }
// void push2(Tree *root){
//     Stack *Newnode = new Stack(root);
//     if(Top2==NULL){
//         Top2 = Newnode;
//     }
//     else{
//         Newnode->next = Top2;
//         Top2 = Newnode;
//     }
// }

// --------------------------------------Pop---------------------------------------
// Tree *pop(){
//     Stack *temp = Top;
//     if(Top==NULL){
//         cout << "Stack is Empty" << endl;
//         exit(1);
//     }
//     else{
//         Tree *value = temp->data;
//         Top = Top->next;
//         free(temp);
//         temp = NULL;
//         return value;
//     }
// }
// Tree *pop2(){
//     Stack *temp = Top2;
//     if(Top2==NULL){
//         cout << "Stack is Empty" << endl;
//         exit(1);
//     }
//     else{
//         Tree *value = temp->data;
//         Top2 = Top2->next;
//         free(temp);
//         temp = NULL;
//         return value;
//     }
// }
// --------------------------------------Top---------------------------------------
// Tree *peek(){
//     Stack *temp = Top;
//     return temp->data;
// }

// 1) Inorder----------------------------------------------------------------------
// Iterative 
// void TraversalDFSInorder(Tree *&root){
//     Tree *temptree = root;

//     while(Top!=NULL||temptree!=NULL){
//         while(temptree!=NULL){
//             push(temptree);
//             temptree = temptree->left;
//         }
//         temptree = peek();
//         cout << temptree->data << " ";
//         pop();
//         temptree = temptree->right;
//     }
// }

// Recursion
// void TraversalDFSInorder(Tree *root){
//     if(root==NULL){
//         return;
//     }
//     TraversalDFSInorder(root->left);
//     cout << root->data << " ";
//     TraversalDFSInorder(root->right);
// }

// 2) Preorder---------------------------------------------------------------------
// Iterative
// void TraversalDFSPreorder(Tree *&root){
//     Tree *temptree = root;
//     push(root);
//     while(Top!=NULL){
//         temptree = peek();
//         cout << temptree->data << " ";
//         pop();
//         if(temptree->right!=NULL){
//             push(temptree->right);
//         }
//         if(temptree->left!=NULL){
//             push(temptree->left);
//         }
//     }
// }

// Recursion
// void TraversalDFSPreorder(Tree *root){
//     if(root==NULL){
//         return;
//     }
//     cout << root->data << " ";
//     TraversalDFSPreorder(root->left);
//     TraversalDFSPreorder(root->right);
// }

// 3) Postorder--------------------------------------------------------------------
// Iterative using one Stack
// void TraversalDFSPostorder(Tree *&root){
//     Tree *temptree = root;
//     Tree *prev = NULL;
//     while(Top!=NULL||temptree!=NULL){
//         if(temptree!=NULL){
//             push(temptree);
//              temptree = temptree->left;
//         }
//         else{
//             temptree = peek();
//             if(temptree->right==NULL||temptree->right==prev){
//                 cout << temptree->data << " ";
//                 pop();
//                 prev = temptree;
//                 temptree = NULL;
//             }
//             else{
//                 temptree = temptree->right;
//             }
//         }
//     }
// }

// Iterative using two Stack
// void TraversalDFSPostorder(Tree *&root){
//     Tree *temptree = root;
//     push(root);
//     while(Top!=NULL){
//         temptree = peek();
//         pop();
//         push2(temptree);
//         if(temptree->left){
//             push(temptree->left);
//         }
//         if(temptree->right){
//             push(temptree->right);
//         }   
//     }
//     while(Top2!=NULL){
//         // temptree = peek2();
//         temptree = pop2();
//         cout << temptree->data << " ";
//     }
// }

// Recursion
// void TraversalDFSPostorder(Tree *root){
//     if(root==NULL){
//         return;
//     }
//     TraversalDFSPostorder(root->left);
//     TraversalDFSPostorder(root->right);
//     cout << root->data << " ";
// }

// ******************************Creating of Tree**********************************
// Creating using recursion but it my own idea
// Tree *CreateTree(Tree *&root, int data){
//     Tree *Newnode = new Tree(data);
//     char landr;
//     if(root==NULL){
//         root = Newnode;
//         return root;
//     }
//     cin >> landr;
//     if(landr=='l'){
//         root->left = CreateTree(root->left,data);
//     }
//     else{
//         root->right = CreateTree(root->right,data);
//     }
//     return root;
// }

// Creating the using LevelOrder BFS
// void CreateTreeBFS(Tree *&root,int data){
//     Tree *Newnode = new Tree(data);
//     if(root==NULL){
//         root = Newnode;
//         Enqueue(root);
//     }
//     else{
//         while(Rear!=NULL||Front!=NULL){
//             Tree *temp = front();
//             if(temp->left==NULL){
//                 temp->left = Newnode;
//                 Enqueue(temp->left);
//                 break;
//             }
//             Dequeue();
//             if(temp->right==NULL){
//                 temp->right = Newnode;
//                 Enqueue(temp->right);
//                 break;
//             }
//         }
//     }
// }

// ******************************Insertion of Tree*********************************
// when the node is not present
// void Insertion(Tree *&root,int data){
//     Tree *Newnode = new Tree(data);
//     Enqueue(root);
//     Tree *temptree = root;
//     while(Front!=NULL){
//         temptree = Dequeue();
//         if(temptree->left==NULL){
//             temptree->left = Newnode;
//             Enqueue(temptree->left);
//             break;
//         }
//         if(temptree->right==NULL){
//             temptree ->right = Newnode;
//             Enqueue(temptree->right);
//             break;
//         }
//         if(temptree->left!=NULL){
//             Enqueue(temptree->left);
//         }
//         if(temptree->right!=NULL){
//             Enqueue(temptree->right);
//         }
//     }
// }

// when the node data is -1
// void Insertion(Tree *root,int data){
//     Tree *Newnode = new Tree(data);
//     Enqueue(root);
//     while(Front!=NULL||Rear!=NULL){
//         Tree *temptree = Dequeue();
//         if(temptree->data==-1){
//             temptree->data = data;
//             break;
//         }
//         if(temptree->left!=NULL){
//             Enqueue(temptree->left);
//         }
//         if(temptree->right!=NULL){
//             Enqueue(temptree->right);
//         }
//     }
// }

// ******************************Deletion of Tree**********************************
// One by one deletion of leaf node
// void Deletion(Tree *&root,int element){
//     if(Front!=NULL||Rear!=NULL){
//         Front = Rear = NULL;
//     }
//     Enqueue(root);
//     Tree *temptree = root;
//     if(temptree->data==element){
//         free(temptree);
//         temptree = NULL;
//         root = temptree;
//     }
//     else{
//         while(Front!=NULL||Rear!=NULL){
//             temptree = Dequeue();
//             if(temptree->right!=NULL){
//                 if(temptree->right->data==element){
//                     free(temptree->right);
//                     temptree->right = NULL;
//                     break;
//                 }
//             }
//             if(temptree->left!=NULL){
//                 if(temptree->left->data==element){
//                     free(temptree->left);
//                     temptree->left = NULL;
//                     break;
//                 }
//             }
//             if(temptree->left!=NULL){
//                 Enqueue(temptree->left);
//             }
//             if(temptree->right!=NULL){
//                 Enqueue(temptree->right);
//             }
//         }
//     }
// }

// ******************************Searching of Tree*********************************
// int Searching(Tree *&root,int data){
//     Tree *Newnode = new Tree(data);
//     Enqueue(root);
//     Tree *temptree = root;
//     while(Front!=NULL){
//         temptree = Dequeue();
//         if(temptree->data==data){
//             return 1;
//         }
//         if(temptree->left!=NULL){
//             Enqueue(temptree->left);
//         }
//         if(temptree->right!=NULL){
//             Enqueue(temptree->right);
//         }
//     }
//     return 0;
// }

int main(){
    // Creating of Tree------------------------------------------------------------

    // Tree *root = NULL;
    // CreateTree(root,1);
    // CreateTree(root,2);
    // CreateTree(root,3);
    // CreateTree(root,4);
    // CreateTree(root,5);
    // CreateTree(root,6);
    // CreateTree(root,7);
    
    // Traversing the Tree using BFS Level Order-----------------------------------
    // TraverseBFSLevelOrder(root);

    // Traversing the Tree using DFS Level Order-----------------------------------
    // TraversalDFSInorder(root);
    // cout << endl;
    // TraversalDFSPreorder(root);
    // cout << endl;
    // TraversalDFSPostorder(root);
    // cout << endl;
    // Insertion(root,5);
    // Deletion(root,4);
    // TraverseBFSLevelOrder(root);
    // int findresult = Searching(root,9);
    // if(findresult==1){
    //     cout << "Element is present" << endl;
    // }
    // else{
    //     cout << "Element is not present" << endl;
    // }
    

// l 
// r
// l
// l
// l
// r
// r
// l
// r
// r
    return 0;

}