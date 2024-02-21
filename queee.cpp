#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> que;
    que.push(100);
    que.push(200);
    que.push(400);
    que.pop();
    while (!que.empty()){
        cout<<que.front()<<endl;
        que.pop();
    }
    return 0;
}