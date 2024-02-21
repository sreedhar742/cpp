#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> nums;
    nums.push(100);
    nums.push(900);
    nums.push(200);
    while (!nums.empty()){
        cout << "Top of the Stack: "<< nums.top() << endl;
        nums.pop();
    }
    return 0;
}
