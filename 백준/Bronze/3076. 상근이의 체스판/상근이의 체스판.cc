#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int r,c,a,b;
    cin>>r>>c>>a>>b;

    vector<string> strs;
    for(int i=0;i<r;i++){
        string s;
        if(i%2==0) s.push_back('X');
        else  s.push_back('.');

        for(int j=1;j<c;j++){
            if(s[j-1] == 'X') s.push_back('.');
            else s.push_back('X');
        }
        strs.push_back(s);
    }

    for(int i=0;i<r;i++){
        string s = strs[i],res;

        for(int j=0;j<s.size();j++){
            for(int k=0;k<b;k++){
                res.push_back(s[j]);
            }
        }
        for(int j=0;j<a;j++){
            cout<<res<<endl;
        }
    }

    return 0;
}     