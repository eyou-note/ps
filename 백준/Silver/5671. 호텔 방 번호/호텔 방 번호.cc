#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,m;
    while(cin>>n>>m){
        int cnt=0;

        for(int i=n;i<=m;i++){
            int t,good=1,d[10]={0,};
            t = i;

            while(t!=0){
                if(d[t%10] != 0){
                    good = 0;
                    break;
                }
                d[t%10] = 1;
                t/=10;
            }

            if(good){ 
                cnt+=1;
            }
        }
        cout<<cnt<<'\n';
    }

    return 0;

}

