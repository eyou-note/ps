#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  

    int t; cin>>t;
    string s;
    while(t--){
        cin>>s;
        int sum=0, d=1;
        for(int i=s.size()-1;i>=0;i--){
            sum += (s[i]-'0') * d;
            d*=2;
        }
        cout<<sum<<endl;
    }

    return 0;
}     