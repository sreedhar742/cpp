#include <iostream>
#include <vector>

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num={1,2,3};

    cout<<"print vector elements are"<<endl;
    for (int i : num) {
    cout << i << "  ";
    
    }
    cout<<endl;
    //add element to the vector
    num.push_back(10);
    num.push_back(100);
    cout<<"updated after pushback"<<endl;
    for(int i:num){
        cout<<i<<" ";
    }
    cout<<endl;
    num.pop_back();
    num.pop_back();
    cout<<"after pop back"<<endl;
    for(int i :num){
        cout<<i<<" ";
    }
    cout<<endl;
    // accessing vector elements
    
    cout<<"accessing elements using indexing"<<num[0]<<endl<<num[1]<<endl<<num[2]<<endl;
    cout<<"accessing elements using at() method"<<endl<<num.at(0)<<endl<<num.at(2)<<endl;
    // using vector iterators
    vector<int>:: iterator iter;

    for(iter=num.begin();iter!=num.end();++iter){
        cout<<*iter<<endl;
    }

    return  0;

}
