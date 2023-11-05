# include <iostream>
using namespace std;
// int FindtoDelete(int arr[],int key,int n){
//     for(int j=0;j<6-n;j++){
//             if(arr[j]==key){
//                 return j;
//             }
//         }
//     return -1;
// }

// void BinarySearch(int arr[],int sizes,int key){
//     for(int i =sizes-1;i >=0;i--){
//         arr[i]=arr[i-1];
//         if (arr[i]==0){
//             continue;
//         }
//         if(arr[i]<key){
//             arr[i]=key;
//             break;
//         }
//     }
// }
// int BinarySearch(int arr[],int middle,int sizes,int key){
//     for(int i=middle;i<sizes;i++){
//         arr[i]=arr[i+1];
//     }
//     return 1;
// }
int main(){
    // ****************************Unsorted Array*****************************
    // Insertion -------------------------------------------------------------
    // int location,index,key;
    // int arr[10]={20,1,15,3,9};
    // while(true){

    //     cout << "Enter the key to Insert: ";
    //     cin >> key;
    //     cout << "Enter the Location to insert the Key: ";
    //     cin >> location;
    //     cout << endl;
    //     index = location - 1;
    //     for(int i=10-1;i>=index;i--){
    //         if(i==index){
    //             arr[index]=key;
    //             break;
    //         }
    //         arr[i]=arr[i-1];
    //     }
    //     for(int j=0;j<10;j++){
    //         cout << arr[j] << " ";
    //     }
    //     cout << endl;
    // }

    // Deletion -------------------------------------------------------------
    // int key;
    // int arr[6]={20,1,15,3,9,10};
    // int n=0;
    // while(n<6){
    //     for(int i=0;i<6-n;i++){
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    //     cout << "Enter the key to delete: ";
    //     cin >> key;
    //     int found = FindtoDelete(arr,key,n);
    //     if(found == -1){
    //         cout << "Key Not found";
    //         cout << endl;
    //         continue;
    //     }
    //     else{
    //         for(int k=found;k<6;k++){
    //             arr[k]=arr[k+1];
    //         }
    //     }
    //     for(int i=0;i<6-n-1;i++){
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    //     cout << "New List"<< endl;
    //     n++;
    // }

    // ****************************sorted Array*****************************
    // Insertion -------------------------------------------------------------
    // int arr[10]={1,2,3,4,5,6,7,8,10};
    // int sizes = size(arr);
    // int middle,lower=0,higher=sizes;
    // int j=0;
    // int key;
    // cin >> key;
    // middle = (lower+higher)/2;
    // if(arr[middle]>key){
    //     lower = middle + 1;
    //     BinarySearch(arr,sizes,key);
    // }
    // else{
    //     higher = middle - 1;
    //     BinarySearch(arr,sizes,key);
    // }
    // for(int i =0;i<sizes;i++){
    //     cout << arr[i] << " ";
    // }

    // Deletion -------------------------------------------------------------
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // int sizes = size(arr);
    // int middle,lower=0,higher=sizes;
    // int j=0;
    // int key;
    // int ans;
    // cin >> key;
    // while(j<sizes){
    //     middle = (lower+higher)/2;
    //     if(arr[middle]==key){
    //         ans = BinarySearch(arr,middle,sizes,key);
    //         break;
    //     }
    //     if(arr[middle]<key){
    //         lower = middle + 1;
    //     }
    //     else{
    //         higher = middle - 1;
    //     }
    //     j++;
    // }
    // if (ans==1){
    //     for(int i=0;i<sizes-1;i++){
    //         cout << arr[i] << " ";
    //     }
    // }
    // else{
    //     cout << "Not Found" << endl;
    //     for(int i=0;i<sizes;i++){
    //         cout << arr[i] << " ";
    //     }
    // }
    return 0;
}