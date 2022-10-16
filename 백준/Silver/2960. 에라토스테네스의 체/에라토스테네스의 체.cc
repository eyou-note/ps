#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,k,cnt=0,a[1001]={0,};
    cin>>n>>k;

    for(int i=2;i<=n;i++){
        a[i] = i;
    }

    for(int i=2;i<=n;i++){
        if(a[i] == 0) continue;
        for(int j=i;j<=n;j+=i){
            if(a[j]!=0){
                a[j] = 0;
                cnt+=1;
                if(k==cnt){
                    cout<<j;
                    return 0;
                }
            }
        }
    }
    
    return 0;
}
