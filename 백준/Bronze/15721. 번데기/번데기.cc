#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

void init(vector<short>& p){
    for(short i=1;i<=2500;i++){
        p.push_back(0); p.push_back(1);
        p.push_back(0); p.push_back(1);
        p.push_back(0); p.push_back(0);
        for(int j=0;j<i-1;j++){
            p.push_back(0);
        }
        p.push_back(1); p.push_back(1);
        for(int j=0;j<i-1;j++){
            p.push_back(1);
        }
    }
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int a,t,n,ans; cin>>a>>t>>n;
    vector<short> p;
    
    init(p);

    for(int i=0;i<p.size()&&t!=0;i++){
        if(p[i] == n){
            t-=1;
            ans=i%a;
        }
    }
    
    cout<<ans;

    return 0;

}

