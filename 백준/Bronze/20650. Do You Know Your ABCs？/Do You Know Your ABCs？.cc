#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);

    int a[7];
    for(int i=0;i<7;i++){
        cin>>a[i];
    }

    sort(a, a+7);

    cout<<a[0]<<' '<<a[1]<<' '<<a[6]-a[0]-a[1];
  
    return 0;

}

