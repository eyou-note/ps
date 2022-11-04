#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
 //   freopen("input.txt", "r", stdin);  

    int cnt=0;
    string in; cin>>in;
    vector<bool> a(in.size()+1);

    for(int i=0;i<in.size();i++){
        a[i+1] = in[i]=='Y';
    }

    for(int i=1;i<=in.size();i++){
        if(!a[i]) continue;

        for(int j=i;j<=in.size();j+=i){
            a[j] = !a[j];
        }
        cnt+=1;
    }

    cout<<cnt;


    return 0;

}
