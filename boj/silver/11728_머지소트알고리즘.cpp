#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    freopen("input.txt", "r", stdin);   

    int n,m;
    cin>>n>>m;
    vector<int> a(n), b(m), result(n+m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    int i=0, j=0, pos=0;
    while(i<n && j<m){
        if(a[i] <= b[j]){
            result[pos++] = a[i++];
        }else{
            result[pos++] = b[j++];
        }
    }

    if(i==n){
        for(int k=j;k<m;k++){
            result[pos++] = b[k];
        }
    }else{
        for(int k=i;k<n;k++){
            result[pos++] = a[k];
        }
    }

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<' ';
    }
    
    return 0;
}
