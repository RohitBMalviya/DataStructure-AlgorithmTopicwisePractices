# include <iostream>
using namespace std;
// void ReverseRotation(int arr[],int start, int end){
//     int n=5;
//     for(int j=0;start<end;j++){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
int main(){
    // Left Rotation-----------------------------------------------------------------------
    // int arr[5] = {1,2,3,4,5};
    // int rotation;
    // cin >> rotation;
    // int n = 5;
    // for(int i=0;i<rotation;i++){
    //     int last = arr[0];
    //     for(int j =0;j<n-1;j++){
    //         arr[j] = arr[j+1];
    //     }
    //     arr[n-1] = last;
    // }
    // for (int i=0;i<5;i++){
    //     cout << arr[i]<< endl;
    // }

    // Right Rotation-----------------------------------------------------------------------
    // for(int i=0;i<rotations;i++){
    //     int first = arr[n-1];
    //     for(int j = n-1;j >= 0;j--){
    //         arr[j] = arr[j-1];
    //     }
    //     arr[0]=first;
    // }
    // for(int k=0;k<n;k++){
    //     cout << arr[k] << endl;
    // }

    // Temporary Rotation Right-------------------------------------------------------------
    // int arr[5]={1,2,3,4,5};
    // int arr1[5]={};
    // int rotations;
    // cin >> rotations;
    // int n=5;
    // for(int i=0;i<rotations;i++){
    //     arr1[i]=arr[n-rotations+i];
    // }
    // for(int j=rotations;j<n;j++){
    //     arr1[j]=arr[j-rotations];
    // }
    // for(int k=0;k<5;k++){
    //     cout << arr1[k] << endl;
    // }

    // Temporary Rotation Left-------------------------------------------------------------
    // int arr[5]={1,2,3,4,5};
    // int arr1[5]={};
    // int rotations;
    // cin >> rotations;
    // int n=5;
    // for(int i=0;i<n-rotations;i++){
    //     arr1[i]=arr[rotations+i];
    // }
    // for(int j=n-rotations;j<n;j++){
    //     arr1[j]=arr[rotations+j-n];
    // }
    // for(int k=0;k<n;k++){
    //     cout << arr1[k] << endl;
    // }

    // Reverse Rotation Right-------------------------------------------------------------
    // int arr[5]={1,2,3,4,5};
    // int rotations;
    // cin >> rotations;
    // int n=5;
    // int temp;
    // int start = 0;
    // int end = n-1-rotations;
    // ReverseRotation(arr,start,end);
    // start = n-rotations;
    // end = n-1;
    // ReverseRotation(arr,start,end);
    // start = 0;
    // end = n-1;
    // ReverseRotation(arr,start,end);

    // for(int k=0;k<n;k++){
    //     cout << arr[k] << endl;
    // }

    // Reverse Rotation left-------------------------------------------------------------
    // int arr[5]={1,2,3,4,5};
    // int rotations;
    // cin >> rotations;
    // int n=5;
    // int temp;
    // int start = rotations;
    // int end = n-1;
    // ReverseRotation(arr,start,end);
    // start = 0;
    // end = rotations-1;
    // ReverseRotation(arr,start,end);
    // start = 0;
    // end = n-1;
    // ReverseRotation(arr,start,end);

    // for(int k=0;k<n;k++){
    //     cout << arr[k] << endl;
    // }

    return 0;
}