#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  
    
    int n,sum=0; cin>>n;
    int limit = ceil(n*0.15);
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    sort(a.begin(), a.end());
    
    for(int i=0;i<limit;i++){
        sum-=a[i];
        sum-=a[n-i-1];
    }

    if(n==0) cout<<0;
    else    cout<<round((double)sum/(n-2*limit));
    
    return 0;

}
