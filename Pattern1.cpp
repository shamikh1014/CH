#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    // n=3;
    int i=1;
    // i=1, 2, 3
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    // int i=0;
    // i=0, 1, 2, 3
    // while(i<=n){

    // }
}