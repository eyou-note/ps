#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

typedef struct _Country{
    int name;
    int gold;
    int silver;
    int bronze;
} Country;

bool cmp(Country a, Country b){
    if( a.gold > b.gold ) return true;
    if( a.gold == b.gold &&  a.silver > b.silver) return true;
    if( a.gold == b.gold &&  a.silver == b.silver && a.bronze > b.bronze) return true;

    return false;
}

int main(){
    fastio;
    freopen("input.txt", "r", stdin);   

    int n,k,ranking=0; 
    Country t;
    cin>>n>>k;
    
    vector<Country> v(n);
    for(int i=0;i<n;i++){
        Country c;
        cin>>c.name>>c.gold>>c.silver>>c.bronze;
        v[i] = c;
        if(c.name == k){
            t = c;
        }
    }

    sort(v.begin(), v.end(), cmp);


    for(int i=0;i<n;i++){
        ranking = i;
        if( v[i].gold == t.gold &&v[i].silver == t.silver &&v[i].bronze == t.bronze){
            break;
        }
    }

    cout<<ranking+1;

    
    return 0;
}
