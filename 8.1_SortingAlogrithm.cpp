# include <iostream>
using namespace std;

// ***********************************Alogrithm********************************
// 1) Selection Sort-----------------------------------------------------------
// void SelectionSort(int arr[],int len){
//     for(int i=0;i<len-1;i++){
//         int index=i;
//         int smaller = arr[i];
//         for(int j=i+1;j<len;j++){
//             if(smaller>arr[j]){
//                 index = j;
//                 smaller = arr[j];
//             }
//         }
//         if(i!=index){
//             int temp = arr[i];
//             arr[i] = smaller;
//             arr[index] = temp;
//         }       
//     }
// }

// 2) Bubble Sort--------------------------------------------------------------
// void BubbleSort(int arr[],int len){
//     for(int i=0;i<len;i++){
//         int flag = 0;
//         for(int j=0;j<len-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 flag = 1;
//             }
//         }
//         if(flag==0){
//             break;
//         }
//     }
//     for(int k=0;k<len;k++){
//         cout << arr[k] << " " ;
//     }
// }

// 3) Insertion Sort-----------------------------------------------------------
// void InsertionSort(int arr[],int len){
//     for(int i=0;i<len-1;i++){
//         if(arr[i]>arr[i+1]){
//             for(int j=i;j>=0;j--){
//                 if(arr[j]>arr[j+1]){
//                     int temp = arr[j+1];
//                     arr[j+1] = arr[j];
//                     arr[j] = temp;
//                 }
//             }

//         }
//     }
// }

// int main(){
//     int arr[5] = {};
//     for(int i=0;i<5;i++){
//         cin >> arr[i];
//     }
// 1) Insertion Sort-----------------------------------------------------------
//     SelectionSort(arr,5);

// 2) Bubble Sort--------------------------------------------------------------
//     BubbleSort(arr,5);

// 2) Insertion Sort--------------------------------------------------------------
//     InsertionSort(arr,5);


// Further all Sorting Algorithm I will do Coding problem.

// 13.1_Divide & Conque Algorithm :
// 14.1_Backtracking  Algorithm:
// 15.1_Greedy Methodology:

// Further all Sorting Algorithm I will do Coding problem.