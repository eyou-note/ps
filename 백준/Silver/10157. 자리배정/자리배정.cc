#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int a[1001][1001];
int dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0};
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int c,r,n; cin>>c>>r>>n;
    int i=0,j=0,d=0,num=1;

    if(c*r < n){
        cout<<0;
        return 0;
    }

    while(num!=n){
        a[j][i] = num++;

        int nj = j + dy[d], ni = i + dx[d]; //다음 좌표
        if(a[nj][ni] !=0 || ni>=c || nj>=r || ni<0 || nj<0){
            d=(d+1)%4;
            nj = j + dy[d], ni = i + dx[d];
        }
        i = ni;
        j = nj;
    }
    
    cout<<i+1<<' '<<j+1;
 
    return 0;

}
