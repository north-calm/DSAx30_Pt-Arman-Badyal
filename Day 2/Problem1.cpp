#include <bits/stdc++.h>
using namespace std;
vector<int> main(){
    vector<int>nums;
    int target;
    int x;
    while(cin>>x){
        nums.push_back(x);
    }
    for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                if(i==j)continue;
                if(nums[i]+nums[j]==target)return {i, j};
            }
        }
    return {};

}