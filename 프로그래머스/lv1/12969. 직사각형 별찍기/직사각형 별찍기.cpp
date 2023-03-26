#include <iostream>

#define endl '\n'
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
  
    int n, m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }cout<<endl;
    }


    return 0;
}