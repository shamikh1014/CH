#include<iostream>
using namespace std;

int main(){
    // int num=2;
    int num=1;

    // char ch='1';
    char ch='a';

    cout<<endl;

    switch(2*num){
        case 1:cout<<"First"<<endl;
                cout<<"First again"<<endl;       
        break;
        case '1': // cout<<"Character one"<<endl;
                switch(num){
                    case 1:cout<<"Value of num is: "<<num<<endl;
                    break;
                }
        break;
        case 2:cout<<"Second"<<endl;
        break;
        default:cout<<"It is default case"<<endl;
    }

    cout<<endl;

    return 0;
}