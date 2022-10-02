#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n,k; cin>>n>>k;
    char c;

    for(int i=0;i<n;i++){
        string s;
        for(int j=0;j<n;j++){
            cin>>c; 

            for(int l=0;l<k;l++){
                s.push_back(c);
                s.push_back(' ');
            }
        }
        for(int l=0;l<k;l++){
            cout<<s<<'\n';
        }
    }

    return 0;
}

