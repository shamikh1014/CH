#include<iostream>
using namespace std;

// 1-> Prime no.
// 0-> Npt a prime no.
bool isPrime(int n){
    for(int i=2;i<n;i++){
        // Divide hogya h, not a prime no.
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;

    if(isPrime(n)){
        cout<<"Is a prime no."<<endl;
    }
    else{
        cout<<"Not a prime no."<<endl;
    }
    
    return 0;
}