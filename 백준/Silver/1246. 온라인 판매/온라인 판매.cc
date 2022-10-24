#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,m; cin>>n>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int result=0, mx = 0, price = 0;
    for(int i=0;i<m;i++){
        
        if(m-i < n){
            result = v[i] * (m-i);
        }else{
            result = v[i] * n;
        }
        if(result > mx){
            mx = result;
            price = v[i];
        }
    }

    cout<<price<<' '<<mx;
    
    return 0;
}
