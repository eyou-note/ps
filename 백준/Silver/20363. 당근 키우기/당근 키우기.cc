#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  
    
    int x,y; cin>>x>>y;
    int sum=0;

    if(x<y) swap(x,y);

    sum=(x+y)+(y/10);
    cout<<sum;

    return 0;
}