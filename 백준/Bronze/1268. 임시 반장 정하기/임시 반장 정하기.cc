#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int a[1001][6];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,ans=1,mx=0;
    cin>>n; 

    for(int i=0;i<n;i++){
        for(int j=1;j<=5;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        set<int> friends;
        for(int j=1;j<=5;j++){
            int me = a[i][j];
            for(int k=0;k<n;k++){
                if(i == k) continue;
                if( a[k][j] == me){
                    friends.insert(k);
                }
            }
        }
        if(friends.size() > mx){
            mx = friends.size();
            ans = i+1;
        }
    }

    cout<<ans;

    return 0;
}