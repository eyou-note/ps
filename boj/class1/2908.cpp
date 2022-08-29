#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


string reverse(string str){
    string result;
    for(int i=str.size()-1;i>=0;i--){
        result+=str[i];
    }
    return result;
}

int main(){
    fastio;
    freopen("input.txt", "r", stdin); 

    string a, b, ans;

    cin>>a>>b;

    for(int i=2;i>=0;i--){
        if(a[i]-'0' == b[i]-'0') 
            continue;

        ans = (a[i]-'0' > b[i]-'0') ? reverse(a) : reverse(b);

        break;
    }

    cout<<ans;

    return 0;
}   