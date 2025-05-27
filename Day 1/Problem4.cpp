#include <bits/stdc++.h>
using namespace std;

int sos(int n){
    int s = 0;
    while(n>0){
        int d = n%10;
        s += d*d;
        n = n/10;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    vector<int>found;

 

    while(true){
        int g = sos(n);
        if(g==1){
            cout<<"True";
            return 0;
        }
        else{
            n = g;
            for(int x: found){
                if(x == n){
                    cout<<"False";
                    return 0;
                }
            }
            found.push_back(n);
        }
    }



}