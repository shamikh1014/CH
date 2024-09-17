#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    bool isPrime=1;
    for(int i=2;i<n;i++){
        // Rem=0, not a prime
        if(n%i==0){
            // cout<<"Not a prime Number"<<endl;
            isPrime=0;
            break;
        }
        // else{
        //     // Rem is not 0, may be prime
        // }
    }

    if(isPrime==0){
        cout<<"Not a prime number"<<endl;
    }
    else{
        cout<<"Is a prime number"<<endl;
    }
}