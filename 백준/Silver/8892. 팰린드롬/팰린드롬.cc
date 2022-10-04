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
    //freopen("input.txt", "r", stdin);  

    int t,n; cin>>t;

    while(t--){
        cin>>n;
        vector<string> v(n);
        bool found = false;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(i==j) continue;

                string str1 = v[i]+v[j],
                        rev_str1 = rev(str1);
                string str2 = v[j]+v[i],
                        rev_str2 = rev(str2);
                
                if(str1 == rev_str1 || str2 == rev_str2){
                    cout<<(str1 == rev_str1 ? str1 : str2)<<'\n';
                    found = true; 
                    break;
                }
            }
            if(found) break;
        }
        if(!found) cout<<"0\n";
    }


    return 0;
}

