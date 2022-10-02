#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  

    int n, cnt=0; 
    string s;
    cin>>n>>s;

    for(int i=0;i<n-3;i++){ 
        if(s[i]=='p'&&s[i+1]=='P'&&s[i+2]=='A'&&s[i+3]=='p'){
            cnt+=1;
            i+=3;
        }
    }
    cout<<cnt;

    return 0;
}

