#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;


int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    long long sum=0;
    vector<int> dist(n-1), cost(n);
    for(int i=0;i<n-1;i++){
        cin>>dist[i];
    }
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }

    long long cur = cost[0];
    sum += cur * dist[0];
    
    for(int i=1;i<n;i++){
        if(cost[i] > cur){
            sum += cur * dist[i];
        }else{
            cur = cost[i];
            sum += cur * dist[i];
        }
    }

    cout<<sum;

    return 0;
}