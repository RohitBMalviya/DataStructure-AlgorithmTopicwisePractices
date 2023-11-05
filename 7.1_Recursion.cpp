# include <iostream>
using namespace std;

// int Recursion(int n){
//     if(n<1){
//         return 1;
//     }
//     Recursion(n-1);
//     Recursion(n-3);
//     return 0;
// }

// int main(){
//     int n = 7;
//     cout << Recursion(n) << endl;
//     return 0;
// }
// int Recursion(int n){
//     if(n==1||n==2){
//         return 1;
//     }
//     return Recursion(n-1) + Recursion(n-2);
// }

// int main(){
//     int n = 5;
//     cout << Recursion(n) << endl;
//     return 0;
// }

int Recursion(int n){
    if(n==1){
        return ;
    }
    return n + Recursion(n-1);
}

int main(){
    int n = 5;
    cout << Recursion(n) << endl;
    return 0;
}