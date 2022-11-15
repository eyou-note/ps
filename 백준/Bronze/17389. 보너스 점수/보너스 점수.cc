#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n,sum=0,bonus=0;
    string s; 
    cin>>n>>s;

    for(int i=0;i<n;i++){
        if(s[i]=='O'){
            sum+= i+1+bonus;
            bonus+=1;
        }else{
            bonus=0;
        }
    }

    cout<<sum;
    return 0;
}