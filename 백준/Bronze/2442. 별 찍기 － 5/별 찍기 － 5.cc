#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int j=1; j<=n-i;j++){ 
                cout<<" ";
        }

        for(int j=0;j<2*(i-1)+1;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}     