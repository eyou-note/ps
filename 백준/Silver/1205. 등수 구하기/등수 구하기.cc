#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);
     
    int n,score,p,rank=1; 
    cin>>n>>score>>p;

    vector<int> a(p,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if (n == p && a[n-1]>=score) rank=-1;
    else{
            for(int i=0;i<n;i++){
                if(a[i]<=score) break;
                rank+=1;
            }
    }
    cout<<rank;

    return 0;
}
