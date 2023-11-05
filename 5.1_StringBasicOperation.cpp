# include <iostream>
# include <string>
# include <cstring>
using namespace std;

int issubstring(string str1, string str2){
    // int m = str1.length();
    // int n = str2.size();

    // for(int i=0;i<n;i++){
    // int count = 0;
    //     int j;
    //     for(j=0;j<m;j++){
    //         if(str2[i+j]==str1[j]){
    //             count = count + 1;
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     if(count==m){
    //         return i;
    //     }
    // }
    // return -1;
    if(str2.find(str1)!=string::npos){
        return str2.find(str1);
    }
    return -1;
}

int main(){
// *****************************String Basic Operations***************************

// 1) Concetenation---------------------------------------------------------------
    // string firstname = "rohit";
    // string lastname = "Malviya";

    // cout << firstname + lastname << endl;
    // firstname.append(lastname);
    // cout << firstname << endl;

// 1) Find the string-------------------------------------------------------------
    // string sentence = "Hello data structure lover find me structure lover find me structure!";
    // string finds = "structure";

    // for(int i=0;i<sentence.size();i++){
    //     if(finds[0]==sentence[i]){
    //         cout << i << endl;
    //     }
    // }
    // A) Find the character in the string.
    // // C++ style
    // size_t found = sentence.find(finds);
    // if(found!=string::npos){
    //     cout << found << endl;
    // }

    // // C style
    // char chararray[] = "structure";
    // found = sentence.find(chararray,found+1);
    // if(found!=string::npos){
    //     cout << found << endl;
    // }

    // B) Find a substring in another string.
    // string str1 = "for";
    // string str2 = "substringfor";
    // int result = issubstring(str1,str2);
    // if(result==-1){
    //     cout << "Substring not found" << endl;
    // }
    // else{
    //     cout << "Substring found: " << result << endl;
    // }

// 3) Replace the string----------------------------------------------------------
    // string replace = "Rohit";
    // replace[1] = '2';
    // cout << replace << endl;

// 4) Finding the the string------------------------------------------------------
    // string findthelength = "krshn  Ram  ram";
    // cout << findthelength.size() << endl;           // builtin Functions
    // cout << findthelength.length() << endl;         // builtin Functions
    // int a;
    // int count = 0;
    // for(int i=0;findthelength[i];i++){             // User Functions
    //     if(findthelength[i]!='\0'){
    //         count = count + 1;

    //     }
    //     else{
    //         break;
    //     }
    // }
    // cout << "Length of the string: " << count << endl;

// 5) Trim a String---------------------------------------------------------------
    // string whitespacename = "r o h i t";
    // cout << whitespacename << endl;
    // cout << whitespacename.length() << endl;
    // int i = 0;
    // int j = 0;
    // while(whitespacename[i]){
    //     if(whitespacename[i]!=' '){
    //         whitespacename[j] = whitespacename[i];
    //         j++;
    //     }
    //     i++;
    // }
    // for(int k = j;whitespacename[k];k++){
    //     whitespacename[k] ='\0';
    // }
    // cout << whitespacename << endl;
    // cout << whitespacename.length() << endl;
    // OR
    // while(whitespacename[i]){
    // if(whitespacename[i]==' '){
    //     j = i;
    //     while(whitespacename[j]){
    //         whitespacename[j] = whitespacename[j+1];
    //         j++;
    //     }
    // }
    //     i++;
    // }
    
// 6) Reverse and Rotation--------------------------------------------------------
    // Rotation
    // string name = "Maahaabhaarat";
    // int len = name.length();
    // // for(int j=0;j<2;j++){
    // char rotation = name[0];
    //     for(int i=0;i<=len;i++){
    //         if(i==len-1){
    //             name[i+1] = rotation;
    //         }
    //         name[i]=name[i+1];
    //     }
    // cout << name << endl;
    // }

    // Reversing
    // int start = 0;
    // int end = len-1;

    // while(start<end){
    //     char temp = name[start];
    //     name[start] = name[end];
    //     name[end] = temp;
    //     start++;
    //     end--;
    // }
    // cout << name << endl;

// 7) Susequence of String--------------------------------------------------------
// 8) Subset of String------------------------------------------------------------
// try and learn from below code 28/09/2023
// #include <iostream>
// #include <cstring>
// using namespace std;

// void printSubstrings(string input) {
//     int n = input.size();
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             for (int k = i; k < j + 1; k++) {
//                 cout << input[k];
//             }
//             cout << endl;
//         }
//     }
// }

// int main() {
//     string input;
//     getline(cin, input);
//     printSubstrings(input);
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// void printSubstrings(string input) {
//     int n = input.size();
//     for (int i = 0; i < n; i++) {

//         string temp = "";

//         for (int j = i; j < n; j++) {
//             temp += input[j];

//             cout << temp << endl;
//         }
//     }
// }

// int main() {
//     string input;
//     getline(cin, input);
//     printSubstrings(input);
//     return 0;
// }

// 9) Binaray of String-----------------------------------------------------------
    // string Binary = "ABCD00";
    // int count = 0;
    // for(int i=0;Binary[i];i++){
    //     if((Binary[i]=='0'&&Binary[i+1]=='0')){
    //         count = count + 1;
    //     }
    //     else if((Binary[i]=='1'&&Binary[i+1]=='1')){
    //         count = count + 1;
    //     }
    //     else if((Binary[i]=='0'&&Binary[i+1]=='1')){
    //         count = count + 1;
    //     }
    //     else if((Binary[i]=='1'&&Binary[i+1]=='0')){
    //         count = count + 1;
    //     }
    //     else{
    //         break;
    //     }
    // }
    // if(count==Binary.length()-1){
    //     cout << "Given String is a Binary" << endl;
    // }
    // else{
    //     cout << "Given String is not a Binary" << endl;
    // }

// 10) Palindrome of String-------------------------------------------------------
    // string palindrome = "abcdcba";
    // int len = palindrome.size() - 1;
    // int i = 0;
    // int count = 0;
    // while(i<len){
    //     if(palindrome[i]!=palindrome[len]){
    //         count = 0;
    //         break;
    //     }
    //     count = count + 1;
    //     i++;
    //     len--;
    // }
    // if(count!=0){
    //     cout << "Given String is a Palindrome " << endl;
    // }
    // else{
    //     cout << "Given String is not a Palindrome " << endl;
    // }

// 11) Pattern Searching----------------------------------------------------------
    // string Text = "AABAACAADAABAABA";
    // string Pattern = "AABA";
    // int i = 0;
    // int j = 0;
    // int count = 0;
    // int len = Pattern.length();
    // int lens = Text.length();
    //  while(i<=lens){
    //     if(j==len){
    //         cout << i-len << " ";
    //         count = 1;
    //         j=0;
    //         i--;
    //     }
    //     if(Text[i]==Pattern[j]){
    //         j++;
    //     }
    //     else{
    //         j=0;
    //     }
    //     i++;
    // }
    // if(count!=0){
    //     cout << "are the Position of Pattern Found" << endl;
    // }
    // else{
    //     cout << "Pattern not Found" << endl;
    // }
    return 0;
}