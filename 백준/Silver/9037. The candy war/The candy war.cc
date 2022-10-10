#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


bool all_same(vector<int>& a){
    int n = a[0];
    for(int i=0;i<a.size();i++){
        if(a[i]!=n) return false;
    }
    return true;
}

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);

    int t,n; cin>>t;

    while(t--){
        cin>>n;
        int loop = 0;
        vector<int> a(n),half(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1){
                a[i]+=1;
            }
        }

        while(!all_same(a)){
            for(int i=0;i<n;i++){
                a[i]/=2;
                half[i] = a[i];
            }
            for(int i=0;i<n;i++){
                int idx = (i+1)%n;  // 옆 아이
                a[idx]+=half[i];

                // if(a[i]%2==1) a[i]+=1;
                if(a[idx]%2==1) a[idx]+=1;
            }
            loop+=1;
        }
        cout<<loop<<'\n';
    }

    return 0;
}

