#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main(){
    fastio;
//    freopen("input.txt", "r", stdin);  

    int n,p,v,cnt=0,r[97]={0,}; 
    cin>>n>>p;

    v=n;
    while(1){
        int t = (v*n)%p;

        if(r[t] >= 3)
            break;

        r[t] += 1;
        v=t;
    }

    for(int i=0;i<97;i++){
        if(r[i]>=3) 
            cnt+=1;
    }

    cout<<cnt;


    return 0;
}