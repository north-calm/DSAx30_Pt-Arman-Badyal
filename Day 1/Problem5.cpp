#include <bits/stdc++.h>
using namespace std;
bool kaprekar(int n){
    int d = n*n;
    string t = to_string(d);
    int l = t.size();
    
    int e = l/2;
    string first = t.substr(0, e);
    string second = t.substr(e);
    int k = 0;
    int f = (first.empty()) ? 0 : stoi(first);
    int s = (second.empty()) ? 0 : stoi(second);
    int sum = f + s;
    return sum==n;

}
int main(){
    int p, q;
    cin>>p;
    cin>>q;
    for(int i = p;i<=q;i++){
        if(kaprekar(i)){
            cout<<i<<", ";
        }
    }

}