#include<bits/stdc++.h>
using namespace std;

class Calc{
public:
    int add(int a, int b){
        return a+b;
    }
    int sub(int  a, int b) { 
        return a-b;
    }
    int mul(int a,int b){
        return a*b;
    }
    int div(int a,int b){
        if (a==0){
            cout<<"divison error";
            return 0;
        }
        else{
            return a/b;
        }
    }
};


int main(){
    int num1,num2,hi;
    cout<<"enter your integers :"<<endl;
    cin>>num1>>num2;
    char op;
    cout<<"enter your operations:(+,-,*,/)"<<endl;
    cin>>op;
    Calc obj;
    switch(op){
        case '+':
            hi=obj.add(num1,num2);
            cout<<"the addition is :"<<hi<<endl;
            break;
        case '-':
            hi=obj.sub(num1,num2);
            cout<<"the difference is :"<<hi<<endl;
            break;
        case '*':
            hi=obj.mul(num1,num2);
            cout<<"the multiply is :"<<hi<<endl;
            break;
        case '/':
            hi=obj.div(num1,num2);
            cout<<"the divison is :"<<hi<<endl;
            break;
        default:
        cout<<"wrong operator entered!!"<<endl;
        
    }

}