#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char op;
    cout<<"Enter frst number";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    cout<<"Enter what you want to do\n + - / * ";
    cin>>op;
    if(op == '+'){
        cout<<num1+num2;
    }
    else if(op == '-'){
        cout<<num1-num2;
    }
    else if(op == '/'){
        if(num2==0){
            cout<<"cannot divide by zero";
        }
        else{
            cout<<num1/num2;
        }
        
    }
    else if(op =='*'){
        cout<<num1*num2;
     }
     else{
        cout<<"invalid";
     }
     return 0;
    }