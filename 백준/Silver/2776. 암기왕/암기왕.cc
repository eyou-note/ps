#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


bool binary_search(vector<int>& a, int begin, int end, int x){

    while(begin<=end){
        int mid = (begin+end)/2;

        if(a[mid]  == x) return true;
        if(a[mid] > x){
            end = mid-1;
        }else {
            begin = mid+1;
        }
    }

    return false;
}

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);

    int t,n,m,x; cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());

        cin>>m;
        for(int i=0;i<m;i++){
            cin>>x;
            if(binary_search(a,0,n-1,x)) cout<<1<<'\n';
            else cout<<0<<'\n';
        }
        
    }
    return 0;
}
