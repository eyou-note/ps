#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

string rev(string s){
    string result;
    for(int i=s.size()-1;i>=0;i--){
        result.push_back(s[i]);
    }
    return result;
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin); 

    int n1,n2,t; cin>>n1>>n2;
    string a1,a2; cin>>a1>>a2>>t;
    string s = rev(a1)+a2;
    int alp[26]={0,};

    for(int i=0;i<n1;i++){
        alp[a1[i]-'A'] = 1;
    }
    for(int i=0;i<n2;i++){
        alp[a2[i]-'A'] = 2;
    }

    while(t--){
        for(int i=0;i<s.size()-1;i++){
            if(  alp[ s[i]-'A']== 1 &&  alp[ s[i+1]-'A'] == 2 ){
                swap(s[i], s[i+1]);
                i+=1;
            }


        }
    }

    cout<<s;

    return 0;
}
