#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    long long n,in; cin>>n;
    long long total=0, sum=(n*(n-1))/2;

    for(int i=0;i<n;i++){
        cin>>in;
        total+=in;
    }   
    cout<<total-sum;

    return 0;

}

