#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  
    
    int t,d; cin>>t;
    int in;

    while(t--){
        cin>>in;
        d=10;
        while(in>d){
            in = round((double)in/(double)d) * d; 
            d*=10;
        }
        cout<<in<<'\n';

    }

    return 0;
}

