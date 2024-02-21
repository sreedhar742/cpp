#include<bits/stdc++.h>

using namespace std;
class Solution{
public:
    int nums(vector<int> &num){
        int n=0;
        for(int i=0;i<num.size();i++){
            if (n<num[i]){
                n=num[i];
            }   
        }
        return n;
    }
};

int main(){
    int car;
    vector<int> c={1,23,423,42,23};
    Solution solution;
    car=solution.nums(c);
    cout<<"The maximum number in the array is : "<<car<<endl;
    return 0;
}