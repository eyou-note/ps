#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);
    
    int t,n; cin>>t;
    while(t--){
        cin>>n;
        long long sum=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i==j) continue;

                sum+=gcd(a[i], a[j]);


            }
        }
        cout<<sum<<'\n';
    }

    return 0;
}
