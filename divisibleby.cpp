#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
     if(n%3==0 && n%5==0){
        cout<<"divisble by 5 and 3"<<endl;
     }
     else{
        cout<<"not divisible by 5 and 3"<<endl;
     }
}