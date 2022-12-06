#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    long long sum=0;

    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());
    
    for(int i=1;i<=n;i++){

        sum += abs(a[i] - i);

    }

    cout<<sum;


    return 0;
}