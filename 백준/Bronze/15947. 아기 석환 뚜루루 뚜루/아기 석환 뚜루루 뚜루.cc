#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin); 
    
    int n,q,r; cin>>n;
    string word[15] = {"","baby","sukhwan","tururu","turu","very","cute","tururu","turu",
                                "in","bed","tururu","turu","baby","sukhwan"};
    string ans;
    q = n/14;
    r = (n%14) == 0 ? 14 : n%14;

    ans = word[r];
    if(ans == "tururu" || ans == "turu"){
        int cnt  = (ans=="tururu") ? 2 : 1; 

        if(cnt+q >= 5){
            ans = "tu+ru*"+to_string(cnt+q);
        }else{
            while(q !=0){
                ans = ans + "ru";
                q-=1;
            }
        }
    }
    cout<<ans;

    return 0;
}

