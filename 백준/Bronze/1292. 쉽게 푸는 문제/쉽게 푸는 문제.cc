#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int a,b,pos=0,nums[1001],sum=0;
    string result;
    cin>>a>>b;

    for(int i=0;i<1000;i++){
        for(int j=0;j<i;j++){
            if(pos==1000) break;
            nums[pos++] = i;
        }
    }

    for(int i=a-1;i<b;i++){
        sum+=nums[i];
    }

    cout<<sum;

    return 0;
}