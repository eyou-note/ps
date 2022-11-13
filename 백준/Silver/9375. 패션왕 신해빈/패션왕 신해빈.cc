#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t; cin>>t;

    while(t--){
        int n,sum=1; cin>>n;
        map<string, int> m;
        string k,v;
        for(int i=0;i<n;i++){
            cin>>v>>k;
            if(m.find(k) == m.end()){
                m[k] = 1;
            }else{
                m[k] +=1;
            }
        }

        for(auto mm : m){
            sum *= mm.second+1;
        }

        cout<<sum-1<<endl;
    }

    return 0;

}