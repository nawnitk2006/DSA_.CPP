#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,5,1,9,3};
  
    cout<< sizeof(arr)<<endl;;
    for(int i=0; i<5;i++){
        cout<<arr[i]<<endl;
    }
// Array 
// Indexing start from 0
cout<<arr[3];
    return 0;
}