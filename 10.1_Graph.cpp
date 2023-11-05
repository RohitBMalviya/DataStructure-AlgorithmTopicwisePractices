// # include <iostream>
// using namespace std;
// # define MAX 5

// int AdjMatrix[MAX][MAX];

// *************************Creation of Graph Using AdjacencyMatrix**************************
// Creation both directed Undirected
// void CreateAdjacencyMatrix(){
//     int connect;
//     for(int i=1;i<=MAX;i++){
//         for(int j=1;j<=MAX;j++){
//             // cout << "To Connect Enter 1 if not Enter 0: " ;
//             cin >> connect;
//             if(connect==1){
//                 AdjMatrix[i][j] = 1;
//             }
//             else{
//                 AdjMatrix[i][j] = 0;
//             }
//         }
//     }
// }

// Insertion both directed Undirected
// void CreateAdjacencyMatrix(int vector,int edge){
//         AdjMatrix[vector][edge] = 1;
// }

// void Print(){
//     for(int i=1;i<=MAX;i++){
//         for(int j=1;j<=MAX;j++){
//             if(i!=j){
//                 cout << "("<< i <<" , " << j <<")" << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// void Print(){
//     for(int i=1;i<=MAX;i++){
//         for(int j=1;j<=MAX;j++){
//             cout << AdjMatrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
    // Creation both directed Undirected
    // CreateAdjacencyMatrix();
    // Print();

    // Insertion both directed Undirected
    // CreateAdjacencyMatrix(1,2);
    // CreateAdjacencyMatrix(1,3);
    // CreateAdjacencyMatrix(2,3);
    // CreateAdjacencyMatrix(3,1);
    // CreateAdjacencyMatrix(3,2);
    // CreateAdjacencyMatrix(3,4);
    // CreateAdjacencyMatrix(3,5);
    // CreateAdjacencyMatrix(4,3);
    // CreateAdjacencyMatrix(5,3);
    // Print();

    // return 0;
// }

// *************************Creation of Graph Using AdjacencyList**************************

// # include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node *next;
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// class Graph{
// public:
//     int vectors;
//     Node **Adj;
//     Graph(int vector){
//         this->vectors = vector;
//         Adj = new Node*[vectors];
//         for(int i=0;i<=vector;i++){
//             Adj[i] = NULL;
//         }
//     }
//     // Undirected
//     void CreateAdjacencyList(int vector,int edge){
//         Node *Newnode = new Node(vector);
//         Newnode->next = Adj[edge];
//         Adj[edge] = Newnode;

//         Newnode = new Node(edge);
//         Newnode->next = Adj[vector];
//         Adj[vector] = Newnode;
//     }
//     // Directed
//     void CreateAdjacencyList(int vector,int edge){
//         Node *Newnode = new Node(edge);
//         Newnode->next = Adj[vector];
//         Adj[vector] = Newnode;
//     }

//     void Print(){
//         for(int i=0;i<=vectors;i++){
//             Node *current = Adj[i];
//             cout << "Vector " << i <<" : " ;
//             while(current!=NULL){
//                 cout << current->data << " ";
//                 current = current->next;
//             }
//             cout << endl;
//         }
//     }
// };

// int main(){
//     Graph graph(5);
//     graph.CreateAdjacencyList(0,1);
//     graph.CreateAdjacencyList(1,2);
//     graph.CreateAdjacencyList(1,5);
//     graph.CreateAdjacencyList(2,3);
//     graph.CreateAdjacencyList(2,4);
//     graph.CreateAdjacencyList(3,4);
//     graph.CreateAdjacencyList(4,5);

//     graph.Print();

// Traversal Technique further coding problem
// }