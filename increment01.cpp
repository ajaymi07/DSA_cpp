#include<iostream>
using namespace std;
int main(){
    int x=5;
    int y=++x + x++;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    // explanation ++x  changesx to 6 and evaluates
    // to 6 .then x++ evaluates to curent x(6) and changes x to 7 .so,6+6=12
    

    
}