#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,sum=0,prev; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(i%2==0) sum+=a[i];
        else sum-=a[i];
    }
    
    prev = sum/2;
    cout<<prev<<'\n';
    for(int i=0;i<n-1;i++){
        cout<<a[i]-prev<<'\n';
        prev = a[i]-prev;
    }


    return 0;

}
