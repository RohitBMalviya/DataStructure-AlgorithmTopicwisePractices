# include <iostream>
using namespace std;

// ***********************************Alogrithm********************************
// 1) Linear Search------------------------------------------------------------

// void Input(int arr[],int num){
//     for(int i=0;i<num;i++){
//         cin >> arr[i];
//     }
// }
// void Display(int arr[],int num){
//     for(int i=0;i<num;i++){
//         cout << arr[i] << " ";
//     }
// }
// int LinearSearch(int arr[],int num, int key){
//     for(int i=0;i<5;i++){
//         if(arr[i]==key){
//             cout<< "Found at the Index: " << i+1 << endl;
//             return true;
//         }
//     }
//     if(true){
//         cout<< "Not Found" << endl;
//     }
//     return 0;
// Another Solution
// int LinearSearch(int arr[],int num, int key){
//     for(int i=0;i<5;i++){
//         if(arr[i]==key){
//             // cout<< "Found at the Index: " << i+1 << endl;
//             return i+1;
//         }
//     }
//     return -1;
// }
// }
// int main(){
//     int num = 5;
//     int key;
//     int arr[num];
//     cout << "Enter the 5 number in the array: ";
//     Input(arr,num);
//     Display(arr,num);
//     cout << endl;
//     cout << "Enter the key to find the element: ";
//     cin>> key;
//     LinearSearch(arr,num,key);

//     return 0;
// }
// int CountLinearSearch(int arr[],int num, int key){
//     int count = 0;
//     for(int i=0;i<7;i++){
//         if(arr[i]==key){
//             count = count + 1;
//         }
//     }
//     if (count == 0){
//         return -1;
//     }
//     return count;
// }
// int main(){
//     int num = 7;
//     int key;
//     int arr[num];
//     cout << "Enter the 5 number in the array: ";
//     Input(arr,num);
//     Display(arr,num);
//     cout << endl;
//     cout << "Enter the key to find the element: ";
//     cin>> key;
//     cout << CountLinearSearch(arr,num,key);
//     // CountLinearSearch(arr,num,key);
//     return 0;
// }

// 2) Sentinel Linear Search---------------------------------------------------
    // int arr[15] = {4,8,9,1,5};
    // int key = 1;
    // int n = size(arr);
    // int last = arr[n-1];
    // arr[n-1]= key;
    // int i = 0;
    // while(arr[i]!=key){
    //     i++;
    // }
    // arr[n-1] = last;
    // if(i<n-1||last==key){
    //     cout << "Element is Present at index: " << i << endl;
    // }
    // else{
    //     cout << "Not Present" << endl;
    // }

// 3) Binary Search------------------------------------------------------------
// void Input(int arr[],int num){
//     for(int i=0;i<num;i++){
//         cin >> arr[i];
//     }
// }
// void Display(int arr[],int num){
//     for(int i=0;i<num;i++){
//         cout << arr[i] << " ";
//     }
// }
// int BinarySearch(int arr[],int num, int key){
//     int higher = num-1;
//     int lower = 0;
//     while(lower<=higher){
//         int middle = lower+((higher-lower)/2);
//         if(arr[middle]==key){
//             return middle;
//         }
//         if(arr[middle]<key){
//             lower = middle + 1;
//         }
//         else{
//             higher = middle - 1;
//         }
//     }
//     if(true){
//         cout << "Not found" << endl;
//         return -1;
//     }
//     return -1;
// }
// int main(){
//     int num;
//     cin >> num;
//     int arr[num]={};
//     Input(arr,num);
//     Display(arr,num);
//     cout << endl;
//     int key;
//     cout << "Enter the key to find: ";
//     cin >> key;
//     cout << BinarySearch(arr,num,key);
//     return 0;
// }

// 4) Meta Binaray Search------------------------------------------------------
    // Further data structure

// 5) Ternary Search-----------------------------------------------------------
//     int TernarySearch(int arr[],int key,int len){
//     int lower = 0;
//     int higher = len-1;
//     int mid1, mid2;
//     while(lower<=higher){
//         mid1 = lower + (higher - lower)/3;
//         mid2 = higher - (higher - lower)/3;
//         if(arr[mid1]==key){
//             return mid1;
//         }
//         if(arr[mid2]==key){
//             return mid2;
//         }
//         if(arr[mid1]>key){
//             higher = mid1 - 1;
//         }
//         else if(arr[mid2]<key){
//             lower = mid2 + 1;
//         }
//         else{
//             lower = mid1 + 1;
//             higher = mid2 - 1; 
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[10]= {1,2,3,4,5,6,7,8,9,10};
//     int len = size(arr);
//     int key = 3;
//     int result = TernarySearch(arr,key,len);
//     if(result!=-1){
//         cout << "Element is Present at index: " << result << endl;
//     }
//     else{
//         cout << "Element is not present" << endl;
//     }
//     return 0;
// }

// 6) Jump Search--------------------------------------------------------------
//     int JumpSearch(int arr[],int key,int len){
//     int jump = int(sqrt(len));
//     int step = jump;
//     int prev = 0;
//     while(arr[step-1]<key){
//         prev = step;
//         step += jump;
//         if(prev>=len){
//             return -1;
//         }
//     }
//     while(arr[prev]<key){
//         if(prev==step){
//             return -1;
//         }
//         prev++;
//     }
//     if(arr[prev]==key){
//         return prev;
//     }
//     return -1;
// }
// int main(){
//     int arr[10]={1,2,3,5,8,13,21,34,55,89};
//     int key = 8;
//     int len = size(arr);
//     int result = JumpSearch(arr,key,len);
//     if(result!=-1){
//         cout << "Element is Present at index: " << result << endl;
//     }
//     else{
//         cout << "Element is not present" << endl;
//     }
//     return 0;
// }

// 7) Interpolation Search------------------------------------------------------
//     int InterpolationSearch(int arr[],int key,int len){
//     int lower = 0;
//     int higher = len-1;
//     int position;
//     while(lower<=higher){
//         // if(lower==higher){
//         //     if(arr[lower]==key){
//         //         return lower;
//         //     }
//         //     return -1;
//         // }
//         position = lower + (((key-arr[lower])*(higher-lower))/(arr[higher]-arr[lower]));
//         if(arr[position]==key){
//             return position;
//         }
//         if(arr[position]<key){
//             lower = position + 1;
//         }
//         else{
//             higher = position - 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[15]= {10,12,13,16,18,19,20,21,22,23,24,33,35,42,47};
//     int key = 21;
//     int len = size(arr);
//     int result = InterpolationSearch(arr,key,len);
//     if(result!=-1){
//         cout << "Element is Present at index: " << result << endl;
//     }
//     else{
//         cout << "Element is not present" << endl;
//     }
//     return 0;
// }

// 8) Exponential Search-------------------------------------------------------
//     int BinarySearch(int arr[],int start,int len, int key){
//     int higher = len;
//     int lower = start;
//     while(lower<=higher){
//         int middle = lower+((higher-lower)/2);
//         if(arr[middle]==key){
//             return middle;
//         }
//         if(arr[middle]<key){
//             lower = middle + 1;
//         }
//         else{
//             higher = middle - 1;
//         }
//     }
//     return -1;
// }

// int ExponentialSearch(int arr[],int key, int len){

//     if(arr[0]==key){
//         return 0;
//     }
//     int i = 1;
//     while(i<len&&arr[i]<=key){
//         if(arr[i]==key){
//             return i;
//         }
//         i = i*2;
//     }
//     if(i<len){
//         len = i;
//     }
//     else{
//         len--;
//     }
//     return BinarySearch(arr,i/2,len,key);
// }

// int main(){
//     int arr[10] = {2,4,10,25,36,48,59,65,75,81};
//     int key = 75;
//     int len = size(arr);
//     int result = ExponentialSearch(arr,key,len);
//     if(result!=-1){
//         cout << "Element is Present at index: " << result << endl;
//     }
//     else{
//         cout << "Element is not present" << endl;
//     }
//     return 0;
// }

// 9) Fibonacci Search---------------------------------------------------------
//     int FabonacciSearch(int arr[],int key, int len){
//     int f0 = 0,f1 = 1;
//     int Fabnext = f0 + f1;
//     while(Fabnext<len){
//         f0 = f1;
//         f1 = Fabnext;
//         Fabnext = f0 + f1;
//     }
//     int offset = -1;
//     int i = 0;
//     while(Fabnext>1){
//         if((offset+f0)<len-1){
//             i = (offset+f0);
//         }
//         else{
//             i = len - 1;
//         }
//         if(arr[i]<key){
//             Fabnext = f1;
//             f1 = f0;
//             f0 = Fabnext - f1;
//             offset = i;
//         }
//         else if(arr[i]>key){
//             Fabnext = f0;
//             f1 = f1 - f0;
//             f0 = Fabnext - f1;
//         }
//         else{
//             return i;
//         }
//     }
//     if(f1&& arr[offset+1]==key){
//         return offset+1;
//     }
//     return -1;
// }

// int main(){
//     int arr[10] = {2,4,10,25,36,48,59,65,75,81};
//     int key = 1;
//     int len = size(arr);
//     int result = FabonacciSearch(arr,key,len);
//     if(result>=0){
//         cout << "Element is Present at index: " << result << endl;
//     }
//     else{
//         cout << "Element is not present" << endl;
//     }
//     return 0;
// }

// 10) The Ubiquitous Binary Search---------------------------------------------
    // same as binary search but differnt method
    // int BinarySearch(int A[], int l, int r, int key)
    // {
    //     int m;

    //     while( r - l > 1 )
    //     {
    //         m = l + (r-l)/2;

    //         if( A[m] <= key )
    //             l = m;
    //         else
    //             r = m;
    //     }

    //     if( A[l] == key )
    //         return l;
    //     if( A[r] == key )
    //         return r;
    //     else
    //         return -1;
    // }
