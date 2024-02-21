#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> nums;
    nums.insert({"first",1});
    nums.insert({"second",2});
    nums.insert({"Third",3});
    for(const auto& pair:nums){
        cout<<"keys-"<<pair.first<<"\nvalues-"<<pair.second<<endl;
    }
    nums.erase("Third");
    for(const auto& pair:nums){
        cout<<pair.first<<" :"<<pair.second<<endl;
    }
    if (nums.empty()){
        cout<<"map is empty";
    }
    else{
        cout<<"map is not empty";
    }
    cout<<endl;
//searching for keys
    auto it=nums.find("fourth");
    if (it!=nums.end()){
        cout<<"element is found"<<it->second<<endl;
    }else{
        cout<<"element is not found";
    }
    return 0;
}