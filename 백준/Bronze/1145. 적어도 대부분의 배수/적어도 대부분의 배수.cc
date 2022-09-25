#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  
    int a[5],n,cnt;
    for(int i=0;i<5;i++){
        cin>>a[i];
        n = min(n, a[i]);
    }
    while(1){
        cnt=0;

        for(int i=0;i<5;i++){
            if(n%a[i] ==0)
                cnt++;
        }

        if(cnt >=3 ){
            break;
        }        
        n++;
    }

    cout<<n;

    return 0;
}