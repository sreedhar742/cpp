#include<bits/stdc++.h>
using namespace std;
 int main(){

    //double ended queue
    deque<int> nums={10,19,29,123,1313};
    //print deque
    for(const auto& i:nums){
        cout<<i<<" ";
    }
    //add element last and first
    nums.push_back(100);
    nums.push_back(500);
    nums.push_front(-876);
    nums.push_front(900);
    nums.pop_back();
    nums.pop_front();
    cout<<"after modifiying :"<<endl;
    sort(nums.begin(),nums.end());
    for(const auto& i:nums){
        cout<<i<<" ";
    }
    
    return 0;
 }