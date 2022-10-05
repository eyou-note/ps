#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

string cnt="32123333113133122212112221";
string convert(string s){
    string result;
    for(int i=0;i<s.size();i++){
         result.push_back(cnt[s[i]-'A']);
    }
    return result;
}
int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  
    
    string s;
    cin>>s;

    s = convert(s);
    
    while(s.size()!=1){
        string t;
        for(int i=0;i<s.size()-1;i+=2){            
            t+=to_string((s[i]-'0' + s[i+1]-'0')%10);
        }
        if(s.size()%2!=0){
            t+=to_string(s[s.size()-1]-'0');
        }
        s = t;
    }

    cout<< ((stoi(s)%2==0)?"You're the winner?" : "I'm a winner!");
    
    return 0;
}

