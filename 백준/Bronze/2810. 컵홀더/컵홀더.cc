#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,holder=0;
    string in, result;
    cin>>n>>in;

    for(int i=0;i<n;i++){
        if(in[i] == 'L'){
            result+="*LL";
            i+=1;
        }else{
            result+="*S";
        }
    }
    result+="*";

    for(int i=0;i<result.size();i++){
        if(result[i]=='*')
            holder+=1;
    }
    cout<<min(n,holder);

    return 0;
}