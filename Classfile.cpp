#include<bits/stdc++.h>
using namespace std;
class  Solution {
public:
    int maxele(vector<int> nums){
        int nul=0;
        for (int i:nums){
            if(i>nul){
                nul=i;
            }
        }
        return nul;
    }
};

int main(){
    vector<int> nums={1,4,3,6,3,9};
    Solution solution;
    int mems=solution.maxele(nums);
    cout<<"The maximum element in the array is "<<mems<<endl;
    return 0;
}