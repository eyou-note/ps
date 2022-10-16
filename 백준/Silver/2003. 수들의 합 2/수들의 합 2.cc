#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,m,cnt=0; cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int en=0,sum=0;
    for(int st=0;st<n;st++){
        while(en<n&&sum<m){
            sum+=a[en++];
        }
        if(sum==m){
            cnt+=1;
        }
        // if(en==n)break;

        sum-=a[st];
    }
    cout<<cnt;

    return 0;
}
