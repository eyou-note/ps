#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

string to_lower_case(string s){
    string result;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            result.push_back(s[i]+32);
        }else{
            result.push_back(s[i]);
        }
    }
    return result;
}

bool cmp(string a, string b){
    return a.size()>b.size();
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  
    
    string s;
    vector<string> a;
    while(1){
        cin>>s;
        string tmp;
        if(s=="E-N-D") break;

        for(int j=0;j<s.size();j++){
            if(s[j]>='A'&&s[j]<='Z' || s[j]>='a'&&s[j]<='z' || s[j]=='-'){
                tmp.push_back(s[j]);
            }
        }
        if(tmp!="") a.push_back(tmp);
    }
    sort(a.begin(), a.end(),cmp);

    cout<<to_lower_case(a[0]);

    return 0;

}
