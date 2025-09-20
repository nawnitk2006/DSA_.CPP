#include<iostream>
using namespace std;
int sum(int n){
    int sumn=0;
    for(int i=1;i<=n;i++){
      sumn +=i;
    }
    return sumn;
}
int main(){
cout<< sum(2)<<endl;
    return 0;
}