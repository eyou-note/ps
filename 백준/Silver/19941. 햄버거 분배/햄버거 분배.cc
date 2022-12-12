#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n, k,cnt=0; 
    string s; 
    cin>>n>>k>>s;

    for(int i=0;i<n;i++){
        if(s[i] == 'P'){
            int begin = (i-k > 0) ? i-k : 0,
                end = (i+k > n) ? n : i+k;
            
            for(int j=begin;j<=end;j++){
                if(s[j] == 'H'){
                    s[j] = 'E';
                    cnt+=1;
                    break;
                }
            }
        }
    }

    cout<<cnt;

    return 0;
}     