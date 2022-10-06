#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    string s1,s2,str,ref = "32123323322122122212111221";

    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        str.push_back( ref[s1[i]-'A'] );
        str.push_back( ref[s2[i]-'A'] );
    }

    while(str.size()!=2){
        string tmp;
        for(int i=0;i<str.size()-1;i++){
            tmp+=to_string((str[i]-'0' + str[i+1]-'0')%10);
        }

        str = tmp;
    }
    
    cout<<str;

    return 0;

}

