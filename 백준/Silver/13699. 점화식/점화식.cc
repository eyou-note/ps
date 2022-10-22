#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);
    int n; cin>>n;
    long long t[36]={0,};

    t[0] = 1;
    
    for(int i=1;i<=n;i++){
        long long result=0;
        for(int j=0;j<i;j++){ 
            result+=t[j]*t[i-(j+1)];
        }
        t[i] = result;
    }

    cout<<t[n];



    return 0;
}
