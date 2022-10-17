#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    set<int> s1, s2;
    int n,m,in,cnt=0; cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>in;
        s1.insert(in);
    }
    for(int i=0;i<m;i++){
        cin>>in;
        s2.insert(in);
    }

    for(auto s : s1){
        if(s2.find(s)==s2.end()) cnt+=1;
    }

    for(auto s : s2){
        if(s1.find(s)==s1.end()) cnt+=1;
    }
    
    cout<<cnt;


    return 0;
}
