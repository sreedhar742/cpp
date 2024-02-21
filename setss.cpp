#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> nums;
    nums.insert(100);
    nums.insert(2000);
    nums.insert(300);
    nums.insert(400);
    nums.insert(500);
    for(const auto& i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
cout<<"after the delete operations"<<endl;
    nums.insert(1000);
    nums.erase(100);
    for(const auto& element:nums){
        cout<<element<<" ";
    }
    cout<<endl;
    //finding the element in the sets
    auto it=nums.find(500);
    if (it!=nums.end()){
        cout<<"the present element is "<<":"<<*it;
    }
    else{
        cout<<"the element was not found";
    }
    return 0;
}