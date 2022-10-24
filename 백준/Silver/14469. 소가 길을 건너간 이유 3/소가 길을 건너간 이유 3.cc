#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first<b.first) return true;
    if(a.first==b.first&&a.second<b.second) return true;
    return false;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,ans=0; cin>>n;
    vector<pair<int,int>> cow(n);

    for(int i=0;i<n;i++){
        pair<int, int> p;
        cin>>p.first>>p.second;
        cow[i] = p;
    }

    sort(cow.begin(), cow.end(),cmp);
    
    for(int i=0;i<n;i++){
        if(cow[i].first<ans){
            ans+=cow[i].second;
        }else{
            ans=cow[i].first+cow[i].second;
        }
    }
    cout<<ans;

    return 0;
}
