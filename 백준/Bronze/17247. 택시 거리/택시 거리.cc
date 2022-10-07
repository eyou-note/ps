#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  
    
    int in,r,c; cin>>r>>c;
    vector< pair<int,int> > v;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>in;
            if(in==1){
                v.push_back(make_pair(i,j));
            }
        }
    }

    cout<<abs(v[1].first-v[0].first) + abs(v[1].second-v[0].second);

    return 0;

}

