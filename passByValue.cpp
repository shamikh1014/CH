#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"N is: "<<n<<endl;
}

int main(){
    int n;
    cin>>n;

    dummy(n);

    cout<<"Number n is: "<<n<<endl;

    return 0;
}