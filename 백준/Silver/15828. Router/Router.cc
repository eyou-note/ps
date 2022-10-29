#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin); 
    
    int n,in; cin>>n;
    queue<int> q;

    while(1){
        cin>>in; 
        if(in == -1) break;
        if(in == 0) {
            q.pop();
        }else if(q.size()<n){
            q.push(in);
        }
    }

    if(q.empty()) cout<<"empty";
    else{
        while(!q.empty()){
            cout<<q.front()<<' ';
            q.pop();
        }
    }

    return 0;
}
