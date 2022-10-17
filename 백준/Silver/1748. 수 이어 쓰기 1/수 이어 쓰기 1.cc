#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);
    
    string n; cin>>n;
    int a=1,d=10; 
    long long sum=0;

    for(int i=1;i<n.size();i++){
        sum += (d - a) * i;
        d*=10, a*=10;
    }

    sum += (stoi(n) - a + 1) * n.size();
    
    cout<<sum;

    return 0;
}
