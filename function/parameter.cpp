#include<iostream>
using namespace std;
int min(int a, int b){
   if(a>b)
   return a;
   else
   return b;
}
int main(){
    cout<<"Hello World"<<endl;
    cout<< min(10,6);
    return 0;
}