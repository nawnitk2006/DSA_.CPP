#include<iostream>
using namespace std;
int main (){
    cout<<(10<<2)<<endl;  // left shift a<<b  a*2^b
    cout<<(8>>2)<<endl;   // Right shift a>>b  a/2*b
    cout<<(7 | 4)<<endl;   // Bitwise OR
    cout<<(7 & 4)<<endl;   //Btwise AND
    cout<<(7 ^ 4);   //Bitwise XOR
    return 0;
}

/* Output 
40
2
7
4
3 */