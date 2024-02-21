#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> nums={1,2,5,10};

    cout<<"list elements are"<<endl;
    for (int num: nums){
        cout<<num<<endl;
    }
    // modify
    nums.push_front(100);
    nums.push_back(200);
    for (int i:nums){
        cout<<i<<",";
    }

    //accessing list elements
    cout<<nums.front()<<endl;
    cout<<nums.back()<<endl;

    cout<<"list reverse";
    nums.reverse();
    for(int i:nums){
        cout<<i<<" ";
    }
    nums.sort();
    cout<<"after the list will be sort"<<endl;
    for(int i :nums){
        cout<<i<<" ";
    }
    
    return 0;
}