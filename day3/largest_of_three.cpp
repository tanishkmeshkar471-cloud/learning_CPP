#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter first number";
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;
    cout<<"enter third number";
    cin>>num3;
    if(num1>num2){
        cout<<"num1 is largest";
    }
    else if(num2>num3){
        cout<<"num2 is largest";
    }
    else if(num3>num2 ||num3>num1){
        cout<<"num3 is largest";
    }
   else{
        cout<<"Invalid";
    }
    return 0;
}