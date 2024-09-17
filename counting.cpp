#include<iostream>
using namespace std;

// Function signal
void printCounting(int num){
    // cout<<n<<endl;
    // Function body
    for(int i=1;i<=num;i++){
        cout<<i<<" ";;
    }
    cout<<endl;
    // return;
}

int main(){

    int n;
    cin>>n;

    // Function call
    printCounting(n);
    
    return 0;
}