#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int T,n,m,t,cnt; cin>>T;

    while(T--){
        cin>>n>>m;
        cnt=0;
        for(int i=n;i<=m;i++){
            t = i;
            do{
                if(t%10 ==0) cnt+=1;
                t/=10;
            }while(t);
        }
        cout<<cnt<<'\n';

    }


    return 0;
}