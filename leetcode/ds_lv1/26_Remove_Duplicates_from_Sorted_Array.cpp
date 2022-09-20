#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

// 추가 공간 안쓰고 신박하게 중복제거..(천재들은 많다..)
//1 2 2 3 3 3 4 4 4 
int removeDuplicates(vector<int>& nums) {
    int idx = 1;

    if(nums.size()<=1)
        return nums.size();

    for(int i=0;i<nums.size()-1;i++){
        if(nums[i] != nums[i+1]){
            nums[idx++] = nums[i+1];
        }
    }

    return idx;
}

int main(){
    fastio;
    freopen("input.txt", "r", stdin);   

    vector<int> v(9);
    for(int i=0;i<9;i++){
        cin>>v[i];
    }

    cout<<removeDuplicates(v);
    
    return 0;
}
