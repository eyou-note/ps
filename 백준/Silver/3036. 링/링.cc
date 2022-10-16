#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int n,a,b,r; cin>>n>>a;

    for(int i=0;i<n-1;i++){
        cin>>b;
        r = gcd(a,b);
        cout<<a/r<<'/'<<b/r<<'\n';
    }

    return 0;
}
