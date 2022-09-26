#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int a[201][4];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n; cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=0;j<3;j++){            
            int me = a[i][j],success=1;

            for(int k=0;k<n;k++){
                if(i == k) continue;
                if(a[k][j] == me){
                    success=0;
                    break;
                }
            }
            sum+=(success?me:0);
        }
        cout<<sum<<'\n';
    }

    return 0;
}