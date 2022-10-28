#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

char w[501][501];
int main(){
    fastio;
  //  freopen("input.txt", "r", stdin); 

    int m,n,ans[5]={0,}; cin>>m>>n;

    for(int i=0;i<5*m+1;i++){
        for(int j=0;j<5*n+1;j++){
            cin>>w[i][j];
        }
    }

   
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
            int r= 5*i+1, c = 5*j+1, cnt=0;
            for(int k=0;k<4;k++){
                if(w[r+k][c] == '*') 
                    cnt+=1;
            }
            ans[cnt] += 1;
       }
    }

    for(int i=0;i<5;i++){
        cout<<ans[i]<<' ';
    }

    return 0;
}
