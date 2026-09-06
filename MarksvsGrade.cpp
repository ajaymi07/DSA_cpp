#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter your mark :";
  cin>>n;
  if(n>=81 && n<=100) cout<<"A";
   else if(n>=61 && n<=80) cout<<"B"<<endl;                   
   else if(n>=41 && n<=60) cout<<"C"<<endl;
   else cout<<"F"<<endl;

}