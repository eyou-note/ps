#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int a[62][62];
void init(){
    a[0][0] = 1;
    a[1][0] = a[1][1] = 1;
    for(int i=2;i<=31;i++){
        for(int j=0;j<i+1;j++){
            if(j==0||j==i) a[i][j] = 1;
            else a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin); 

    int r,c,w,sum=0; 
    cin>>r>>c>>w;

    init();
    
    for(int i=0;i<w;i++){
        for(int j=c-1; j<c+i; j++){
            sum+=a[r-1+i][j];
        }
    }

    cout<<sum;
    
    return 0;

}
