#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool binary_search(vector<int>& a, int begin, int end, int x){
    while(begin<=end){
        int mid = (begin+end)/2;
        if(a[mid]==x) return true;
        else if (a[mid] > x) end=mid-1;
        else begin=mid+1;
    }
    return false;
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int n,m; cin>>n>>m;
    vector<int> a(n),b(m),ans;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i=0;i<n;i++){
        if(!binary_search(b, 0, m-1, a[i])){
            ans.push_back(a[i]);
        }
    }
    cout<<ans.size()<<'\n';
    for(auto aa : ans){
        cout<<aa<<' ';
    }

    return 0;
}
