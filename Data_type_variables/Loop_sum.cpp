// #include<iostream>
// using namespace std;
// int main(){
//     int n=10,sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<sum;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int i=1,n=10,sum=0;
//     while(i<=n){
// sum=sum+i;
// i++;
//     }
//     cout<<sum;
//     return 0;
// }
//check a prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    bool is_prime=true;
    cin>>n;
    for(int i=2;i<=(n-1);i++){
        if(n%i==0){
        is_prime=false;   
        break;
            }
        
    }
    if (is_prime)
    cout << n << " is a Prime number." << endl;
else
    cout << n << " is NOT a Prime number." << endl;

    return 0;
}