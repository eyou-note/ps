#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    string in;
    int k=0; 
    
    cin>>in;
    
    for(int i=0;i<in.size();i++){
        k+=1;
        while(in[i]<in[i+1]){
            i++;
        }
    }

    cout<<k;

    return 0;
}

