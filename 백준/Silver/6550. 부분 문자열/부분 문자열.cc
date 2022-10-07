#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  
    
    string s1, s2; 
    while(cin>>s1>>s2){
        int pos = 0;
        for(int i=0;i<s2.size();i++){
            if(s2[i] == s1[pos]){
                pos++;
            }
        }
        if(pos == s1.size()) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;

}

