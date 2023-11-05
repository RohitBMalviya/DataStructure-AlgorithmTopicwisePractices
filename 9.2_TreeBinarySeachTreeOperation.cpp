# include <iostream>
using namespace std;
# include <queue>
# include <stack>

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
// // *************************Creation of Binary Search Tree*************************
// void BinarySearchTree(Tree *&root,int data){
//     Tree *Newnode = new Tree(data);
//     Tree *temptree = root;
//     if(root==NULL){
//         root = Newnode;
//     }
//     else{
//         while(temptree!=NULL){
//             if(data<temptree->data){
//                 if(temptree->left==NULL){
//                     temptree->left = Newnode;
//                     break;
//                 }
//                 else{
//                     temptree = temptree->left;
//                 }
//             }
//             else{
//                 if(temptree->right==NULL){
//                     temptree->right = Newnode;
//                     break;
//                 }
//                 else{
//                     temptree = temptree->right;
//                 }

//             }
//         }  
//     }
// }
// // ********************************Traversal BFS & DFS*****************************
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
// void TraversalDFSInorder(Tree *root){
//     if(root==NULL){
//         return;
//     }
//     TraversalDFSInorder(root->left);
//     cout << root->data << " ";
//     TraversalDFSInorder(root->right);
// }

// void TraversalDFSPreorder(Tree *root){
//     if(root==NULL){
//         return;
//     }
//     cout << root->data << " ";
//     TraversalDFSPreorder(root->left);
//     TraversalDFSPreorder(root->right);
// }

// void TraversalDFSPostorder(Tree *root){
//     if(root==NULL){
//         return;
//     }
//     TraversalDFSPostorder(root->left);
//     TraversalDFSPostorder(root->right);
//     cout << root->data << " ";
// }
// // *****************************Insertion of Binary Search Tree********************
// void Insertion(Tree *&root,int data){
//     Tree *Newnode = new Tree(data);
//     Tree *temptree = root;
//     while(temptree!=NULL){
//             if(data<temptree->data){
//                 if(temptree->left==NULL){
//                     temptree->left = Newnode;
//                     break;
//                 }
//                 else{
//                     temptree = temptree->left;
//                 }
//             }
//             else{
//                 if(temptree->right==NULL){
//                     temptree->right = Newnode;
//                     break;
//                 }
//                 else{
//                     temptree = temptree->right;
//                 }

//             }
//         }  
    
// }
// // *****************************Deletion of Binary Search Tree*********************
// void Deletion(Tree *&root,int data){
//     Tree *temptree1 = root;
//     Tree *temptree2 = NULL;
//     while(temptree1!=NULL){
//         if(temptree1->data==data){
//             // ZERO CHILD CASE
//             if(temptree1->left==NULL&&temptree1->right==NULL){
//                 temptree2->left = NULL;
//                 free(temptree1);
//                 temptree1 = NULL;
//                 break;
//             }
//             // ONE CHILD CASE
//             if(temptree2->data>data){
//                 if(temptree1->left!=NULL){
//                     temptree2->left = temptree1->left;
//                     free(temptree1);
//                     temptree1 = NULL;
//                     break;
//                 }
//                 if(temptree1->right!=NULL){
//                     temptree2->left = temptree1->right;
//                     free(temptree1);
//                     temptree1 = NULL;
//                     break;
//                 }
//             }
//             else{
//                 if(temptree1->left!=NULL){
//                     temptree2->right = temptree1->left;
//                     free(temptree1);
//                     temptree1 = NULL;
//                     break;
//                 }
//                 if(temptree1->right!=NULL){
//                     temptree2->right = temptree1->right;
//                     free(temptree1);
//                     temptree1 = NULL;
//                     break;
//                 }  
//             }
//         // TWO CHILD CASE
//         // After words
//         }
//         if(temptree1->data>data){
//             temptree2 = temptree1;
//             temptree1 = temptree1->left;
//         }
//         else{
//             temptree2 = temptree1;
//             temptree1 = temptree1->right;
//         }
//     }
// }
// // ****************************Searching of Binary Search Tree*********************
// int Searching(Tree *root,int data){
//     Tree *temptree = root;
//     while(temptree!=NULL){
//         if(temptree->data==data){
//             return 1;
//         }
//         if(data<=temptree->data){
//             temptree = temptree->left;
//         }
//         else{
//             temptree = temptree->right;
//         }
//     }
//     return 0;
// }

int main(){
    // Tree *root = NULL;
    // BinarySearchTree(root,4);
    // BinarySearchTree(root,2);
    // BinarySearchTree(root,6);
    // BinarySearchTree(root,1);
    // BinarySearchTree(root,3);
    // BinarySearchTree(root,7);
    // BinarySearchTree(root,5);
    // cout << endl;

    // TraverseBFSLevelOrder(root);
    // cout << endl;
    // TraversalDFSInorder(root);
    // cout << endl;
    // TraversalDFSPreorder(root);
    // cout << endl;
    // TraversalDFSPostorder(root);
    // cout << endl;
    // Insertion(root,8);
    // TraverseBFSLevelOrder(root);
    // Deletion(root,5);
    // int findresult = Searching(root,8);
    // if(findresult==1){
    //     cout << "Element is present" << endl;
    // }
    // else{
    //     cout << "Element is not present" << endl;
    // }

    return 0;
}