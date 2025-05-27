#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string t = "";
    for(int i = 1; i<2*n;i++){
        t = t + to_string(n);
    }
    vector <string> a;
    int b = 0;
    int e = t.size() - 1;
    for(int i = 0;i<n;i++){
        int k = 0;
        for(char j : t){
            if(k>= b && k <= e){
                int u = n-i;
                char c = '0' + u;
                t[k]=c;
                cout<<u;
                
                k++;      
            }
            else{
                cout<<j;
                k++;
            }
        }
        if(i!=n-1){
            a.push_back(t);
        }
        b++;
        e--;
        cout<<endl;
    }
    reverse(a.begin(), a.end());
    for(string n: a){
        cout<<n<<endl;
    }
    
}