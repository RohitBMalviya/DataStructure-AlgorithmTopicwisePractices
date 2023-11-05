# include <iostream>
using namespace std;

int main(){
// ***********************************1D Array*********************************
    // int arr[10];
    // for(int i=0 ;i<10; i++){
    //     cin>> arr[i];
    // }
    // cout << endl;
    // for(int i=0; i<10; i++){
    //     cout << arr[i] << endl;
    // }

// ***********************************2D Array*********************************
    // int arr2D[2][2] = {1,2,
    //                    3,4};

    // for(int i=0; i<2; i++){
    //     for(int j=0; j<2; j++){
    //         cout << arr2D[i][j] << " ";
    //     }
    //     cout << endl;
    // }

// ***********************************3D Array*********************************
    // int arr3D[3][3][3] = {1,2,3,
    //                       4,5,6,
    //                       7,8,9,
    //                       };

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         for(int k=0; k<3; k++){
    //             cout << arr3D[i][j][k] << " ";
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;
    // }

// ********************************Pointer Array*******************************
    int arr[5]={1,2,3,4,5};
    int *ptr = &arr[0];
    // ptr = arr;
    cout << ptr << endl;
    cout << &arr[0] << endl;
    int i = 0;
    while(i<5){
        // cout << &arr[i] << endl;
        cout << ptr[i] << endl;
        i++;
    }

    // int i = 5;
    // int *ptr = &i;
    // cout << *ptr << endl;

    return 0;
}