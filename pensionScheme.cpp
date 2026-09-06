#include <iostream>
using namespace std;
int main(){
  int age ,AI;
  char BN;
cout<<"you are indian citizen :";
cin>>BN;
cout<<"enter your age ";
cin>>age;
cout<<"enter your anual income :";
cin>>AI;
   if(BN == 'y' ){
    if(age>60){
        if(AI<200000){
            cout<<"your pansion is aprove"<<endl;
        }
        else{
            cout<<"your anual income  greater than 2,00,000 ";
        }
    }
    else cout<<"your age less than 60";

   }
   else cout<<"you are not indian citizen :";
}