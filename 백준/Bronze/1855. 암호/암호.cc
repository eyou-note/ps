#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

char ans[21][21];
int main(){
    fastio;
   // freopen("input.txt", "r", stdin); 

    int r,c,pos=0; 
    string in; cin>>c>>in;
    r = in.size() / c;

    for(int i=0;i<r;i++){
            if(i%2==0){
            for(int j=0;j<c;j++){
                ans[i][j] = in[pos++];
            }
        }else{
            for(int j=c-1;j>=0;j--){
                ans[i][j] = in[pos++];      
            }
        }
        
    }

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<ans[j][i];
        }
    }

    return 0;
}

