#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


string close_str(unordered_map<string,char>& um, string a){
    string result;
    int diff=0,mn=7;

    for(auto m : um){
        diff =0;
        string t = m.first;
        for(int i=0;i<t.size();i++){
            if(t[i] != a[i]) diff+=1;
        }
        if(diff < mn){
            result = m.second;
            mn = diff;
        }
    }

    if(mn >=2) 
        result = "NOT_FOUND";

    return result;
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin); 

    int n; cin>>n;
    string in,ans; cin>>in;
    bool unkown = false;
    unordered_map<string,char> um;
    um["000000"] = 'A', um["001111"] = 'B', um["010011"] = 'C', 
    um["011100"] = 'D', um["100110"] = 'E', um["101001"] = 'F', 
    um["110101"] = 'G', um["111010"] = 'H';
    
    for(int i=0;i<n;i++){
        int begin = i*6;
        string slice = in.substr(begin, 6);
        
        if(um.find(slice)==um.end()){
            string result = close_str(um, slice);
            if(result == "NOT_FOUND"){
                ans = to_string(i+1);
                break;
            }
            ans += result;
        }else{
            ans += um.find(slice)->second;
        }

    }

    cout<<ans;

    return 0;
}

