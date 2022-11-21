#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,x,ans=0; cin>>n;
    int cnt[2000001]={0,};
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]]=1;
    }

    cin>>x;

    for(int i=1;i<=x;i++){
        if(cnt[i]!=0 && cnt[abs(x-i)]!=0 && i+i != x){
            ans+=1;
            cnt[i] = 0;
        }
    }

    cout<<ans;


    return 0;

}