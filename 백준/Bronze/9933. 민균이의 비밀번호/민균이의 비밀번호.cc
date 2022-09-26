#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

string rev_str(string s){
    string result;
    for(int i=s.size()-1;i>=0;i--){
        result.push_back(s[i]);
    }
    return result;
}

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    string in;
    set<string> password;

    for(int i=0;i<n;i++){
        cin>>in;
        password.insert(in);

        string rev =  rev_str(in);
        if(password.find(rev) != password.end()){
            cout<<rev.size()<<' '<<rev[rev.size()/2];
            break;
        }
    }
    return 0;
}