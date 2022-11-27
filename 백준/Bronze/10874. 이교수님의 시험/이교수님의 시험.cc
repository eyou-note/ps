#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
//    freopen("input.txt", "r", stdin);  

    int n,in,ans; cin>>n;
    for(int i=1;i<=n;i++){
        bool perfect = true;
        vector<int> a(11);
        for(int i=1;i<=10;i++){
            cin>>a[i];
        }
        
        for(int j=1;j<=10;j++){
            ans = ((j-1) % 5) +1;
            if(a[j] != ans){
                perfect = false;
                break;
            }
        }

        if(perfect){
            cout<<i<<endl;
        }
    }

    return 0;
}