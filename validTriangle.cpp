#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three side of triangle:";
    cin>>a>>b>>c;
    if(a>=b+c || b>=c+a || c>a+b){
        cout<<"triangle is invalid :"<<endl;
        
    }
    else {
        cout<<"valid triangle"<<endl;
    }
    
}