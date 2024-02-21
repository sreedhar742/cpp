#include<bits/stdc++.h>

using namespace std;

int main(){
    //double to int
    double na;
    cin>>na;
    int i= static_cast<int>(na);
    cout<<i<<endl;
    //int to string
    int num;
    cin>>num;
    string nums=to_string(num);
    cout<<nums<<endl;
    // string to int
    string names;
    cin>>names;
    int nam=stoi(names);
    cout<<nam<<endl;
    return 0;
}