#include <iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter selenig price :";
    cin>>sp;
    cout<<"enter cost price :";
    cin>>cp;
   if(cp>sp) cout<<"Loss"<<endl;
   if(cp<sp) cout<<"profit"<<endl;
    if(sp==cp) cout<<"no profit no loss "<<endl;
   
}