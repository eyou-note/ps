#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    string a,b,c; cin>>a>>b;

    for(int i=0;i<a.size();i++){
        c = c+a[i]+b[i];
    }

    while(c.size()!=2){
        string t;
        for(int i=0;i<c.size()-1;i++){
            t+=to_string(((c[i]-'0') + (c[i+1]-'0'))%10);
        }
        c = t;
    }
    cout<<c;


    return 0;
}