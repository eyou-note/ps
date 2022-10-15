#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool cmp(int a, int b){
    return a>b;
}
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);
    int n, sum=0; cin>>n;
    vector<int> a(n),b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(),cmp);

    for(int i=0;i<n;i++){
        sum+=a[i]*b[i];
    }
    cout<<sum;


    return 0;
}
