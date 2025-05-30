#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    int x;
    while(cin>>x){
        arr.push_back(x);
    }
    int l = arr.size();
    for(int i = 0;i<l-1;i++){
        int t = arr[0];
        arr.push_back(t);
        arr.erase(arr.begin());
    }
    for(int i: arr)cout<<i<<" ";

}