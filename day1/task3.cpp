#include<iostream>
using namespace std;
int main(){
    int num1,num2;

    cout<<"enter a number"<<endl;
    cin>>num1;

    cout<<"enter a number"<<endl;
    cin>>num2;

    if(num1==num2){
        cout<<"num1 equals to num2";
    }
    else if(num1>num2){
        cout<<"num1 grater than num2";
    }
   
    else{
        cout<<"num2 is grater than num1";
    }

    return 0;
}