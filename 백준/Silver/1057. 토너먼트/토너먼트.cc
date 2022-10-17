#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,a,b,round=1; cin>>n>>a>>b;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        v[i] = i;
    }

    while(1){
        vector<int> result; result.push_back(0);
        bool match = false;
        for(int i=1;i<v.size();i+=2){
            bool flag = i+1<v.size();
            if( i+1 < v.size() &&  ((v[i] == a && v[i+1] ==b) || ((v[i] == b && v[i+1] ==a))) ){ 
                match = true;
                break;
            }

            if(v[i] == a || v[i] == b) result.push_back(v[i]);
            else result.push_back( i+1 < v.size() ? v[i+1] : v[i]);
        }
        if(match) break;

        round+=1;

        v = result;
    }
    
    cout<<round;

    return 0;
}
