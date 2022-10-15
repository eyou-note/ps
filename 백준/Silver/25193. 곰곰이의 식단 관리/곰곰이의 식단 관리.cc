#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main(){
    fastio;
   // freopen("input.txt", "r", stdin);
    
    int n,c_cnt=0; 
    string s; 
    cin>>n>>s;

    for(int i=0;i<n;i++){
        if(s[i] == 'C')
            c_cnt+=1;
    }

    cout<<(c_cnt/(n-c_cnt+1)) + (c_cnt%(n-c_cnt+1)!=0?1:0);


    return 0;
}
