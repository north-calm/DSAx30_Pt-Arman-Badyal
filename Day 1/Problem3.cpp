#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i = 1;i<=n;i++){
        a.push_back(i);
    }
    do{
        for(int i: a){
            cout<<i<<" ";
        }
        cout<<endl;
    }while(next_permutation(a.begin(), a.end()));
    
}