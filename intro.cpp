#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        // if(a[s]!=a[e]){
        if(toLowerCase(a[s])!=toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }

    return count;
}

char getMaxOccCharacter(string s){
    int arr[26]={0};

    // Create an array of count of characters
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        // Lowercase
        int number=0;
        number=ch-'a';
        // if(ch>='a' && ch<='z'){
        //     number=ch-'a';
        // }
        // else{    // Uppercase
        //     number=ch-'A';
        // }
        arr[number]++;
    }
    // Find maximum occ character
    int maxi=-1, ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    // char finalAns='a'+ans;
    // return finalAns;
    return 'a'+ans;
}

int main(){

    /*
    char name[20];

    cout<<"Enter your name: "<<endl;
    cin>>name;
    // name[2]='\0';

    cout<<"Your name is: "<<endl;
    cout<<name<<endl;

    int len=getLength(name);
    cout<<"Length: "<<len<<endl;
    // cout<<"Length: "<<getLength(name)<<endl;

    reverse(name, len);
    cout<<"Your name is: "<<endl;
    cout<<name<<endl;

    cout<<"Palindrome or not: "<<checkPalindrome(name, len)<<endl;

    cout<<"CHARACTER is: "<<toLowerCase('b')<<endl;
    cout<<"CHARACTER is: "<<toLowerCase('C')<<endl;


    string str="babbar";
    str[2]='\0';
    cout<<str<<endl;
    */

    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;

    return 0;
}