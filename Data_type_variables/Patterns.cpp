// * * * * * 
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//           cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// } 
// A B C D E F 
// A B C D E F
// A B C D E F
// A B C D E F
// A B C D E F 
// A B C D E F
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,n=6;
//     for(i=0;i<n;i++){
//         char ch='A';
//         for(j=0;j<n;j++){
//           cout<<ch <<" ";
//           ch=ch+1;  
//         }
//         cout<<endl;
//     }
//     return 0;
//   }
// 1 2 3 
// 4 5 6
// 7 8 9
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3,i,j,s=0;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//            s=s+1;
//            cout<<s<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// a b c d 
// e f g h
// i j k l
// m n o p
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4,i,j;
//     char ch=96;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// *
// **
// ***
// ****
// *****
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4,i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// 1
// 22
// 333
// 4444
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4,i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<i+1;j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// A
// BB
// CCC
// DDDD
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4,i,j;
//     char ch=64;
//     for(i=0;i<4;i++){
//         ch++;
//         for(j=0;j<i+1;j++){
//             cout<<ch;
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// A
// BC
// DEF
// GHIJ
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4,i,j;
//     char ch='A';
//     for(i=0;i<4;i++){
//         for(j=0;j<i+1;j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// 1
// 12
// 123
// 1234

// Reverse triangle
// 1
// 21
// 321
// 4321
// FLoyd's triangle pattern
// 1
// 23
// 456
// 78910

// inverted triangle
// 1111
//  222
//   33
//    4
// 1 outer loop 2 inner loop
// for space and for no.
// only change in j
// 1 1 1 1 
//  2 2 2 
//   3 3 
//    4

