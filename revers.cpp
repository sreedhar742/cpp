#include<bits/stdc++.h>
using namespace std;
class Rev{ 
public:
    vector<int> num(vector<int> &cars){
        reverse(cars.begin(), cars.end());
        return cars;
    }
};

vector<int> main(){
    vector<int> cars= {2,3,1,5,4};  //input array
    Rev rev;
    return rev.num(cars);   //calling the function to reverse the arra
    
}