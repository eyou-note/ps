#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   //freopen("input.txt", "r", stdin); 

    long long w,n,q;
    cin>>n>>w;

    vector<int> chart(n);
    for(int i=0;i<n;i++){
        cin>>chart[i];
    }

    for(int i=0;i<n-1;i++){
        if(chart[i]<chart[i+1]){
            q = w/chart[i];
            w %= chart[i];
            
            w += (chart[i+1] * q);
        }
    }

    cout<<w;


    return 0;
}
