#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t,a,b,ans; 
    cin>>t;

    while(t--){
        cin>>a>>b;
        if(a>b) swap(a,b);
        set<int> na,nb;

        while(a){
            na.insert(a);
            a/=2;
        }
        
        while(b){
            nb.insert(b);
            b/=2;
        }
        
        for(auto k: nb){
            if(na.find(k)!=na.end()){
                ans = k;
            }
        }
        cout<<ans*10<<'\n';
    }



    return 0;
}
