#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  

    int n,cnt=0; cin>>n;

    for(int i=3;i<=n;i+=3){
        for(int j=3;j<=n;j+=3){
            int r = n-(i+j); 
            if(r>0 && n%3==0){
                cnt+=1;
            }
        }
    }

    cout<<cnt;
 
    return 0;
}