#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int cnt[26]={0,}, odd=0;
    string s,ans,rev; 
    char c;
    cin>>s;

    for(int i=0;i<s.size();i++){
        cnt[ s[i] -'A' ] += 1;
    }

    for(int i=0;i<26;i++){
        if(cnt[i]%2 == 1){
            c = i+'A';
            odd+=1;
        }
    }
    
    if(odd>1){
        cout<<"I'm Sorry Hansoo";
        return 0;
    }

    for(int i=0;i<26;i++){
        while(cnt[i]>1){
            ans.push_back('A'+i);
            cnt[i]-=2;
        }
    }

    rev = ans;
    reverse(rev.begin(), rev.end());

    if(odd)
        cout<<ans<<c<<rev;
    else 
        cout<<ans<<rev;

    return 0;
}