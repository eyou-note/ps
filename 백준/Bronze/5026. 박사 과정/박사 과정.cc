#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int t; cin>>t;
    string s;

    while(t--){
        cin>>s;
        int pos = 0;
        string a,b;

        if(s == "P=NP"){
            cout<<"skipped"<<endl;
            continue;
        }
        
        while(s[pos]!='+'){
            a.push_back(s[pos++]);
        }
        
        while(pos<s.size()){
            b.push_back(s[pos++]);
        }

        cout<<(stoi(a)+stoi(b))<<endl;
    }

    return 0;
}     