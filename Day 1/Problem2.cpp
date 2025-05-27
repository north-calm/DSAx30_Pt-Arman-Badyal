#include <bits/stdc++.h>
using namespace std;

int a = 'A';

int main(){
    int n;
    cin>>n;
    int s = 1;
    for(int i = 0; i<n;i++){
        char u = a+i;
        int c = a;
        for(int j = 0; j<i+i+1;j++){
            cout<<char(c);
            if(c==u){
                s = -1;
            }
            c = c+s;
        }
        cout<<endl;
        s = 1;


    }

}