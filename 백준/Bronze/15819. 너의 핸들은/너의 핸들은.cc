#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


bool cmp(string a, string b){
    if(a < b) return true;
    if(a < b&&a.size()<b.size())return true;
    return false;
}
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n, k; cin>>n>>k;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end(),cmp);
    
    cout<<a[k-1];

    
    return 0;
}

