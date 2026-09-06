#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three numbers :";
    cin>>a>>b>>c;  // nested if else
    if(a>b){
        if(a>c) cout<<"a is greater";
        else cout<<"c is greater";
    }
    else{
        if(b>c) cout<<"b is greater";
        else cout<<"c is greater";
    }
}