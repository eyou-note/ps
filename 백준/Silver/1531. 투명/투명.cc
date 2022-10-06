#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int pic[101][101];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,m,rx,ry,lx,ly,cnt=0; cin>>n>>m;
    while(n--){
        cin>>lx>>ly>>rx>>ry;

        for(int i=lx;i<=rx;i++){
            for(int j=ly;j<=ry;j++){
                pic[i][j] +=1;
            }
        }
    }

    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            if(pic[i][j] > m)
                cnt+=1;
        }
    }
    cout<<cnt;
    
    return 0;

}

