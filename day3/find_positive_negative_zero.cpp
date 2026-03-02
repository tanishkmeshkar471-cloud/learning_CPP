#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter a number";
    cin>>num1;
    if(num1==0){
        cout<<"num1 is zero number";
    }
    else if(num1<0){
        cout<<"num1 is negative";
    }
    else if(num1>0){
        cout<<"num1 is positive";
    }
    else{
        cout<<"invalid";
    }
}

