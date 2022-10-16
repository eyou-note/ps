#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);
    
    int t; cin>>t;
    string s, p;
    while(t--){
        cin>>s>>p;
        int length = 0;
        char c = p[0];
        for(int i=0;i<s.size();i++){    

            if(s[i] == c){
                bool paste = true;
                for(int j=1;j<p.size();j++){
                    if(s[i+j] != p[j]){
                        paste = false;
                        break;
                    }
                }
                if(paste) i+=p.size()-1;
            }
            
            length+=1;
        }

        cout<<length<<'\n';
    }    

    return 0;
}
