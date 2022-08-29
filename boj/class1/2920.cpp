#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    freopen("input.txt", "r", stdin); 

    char in;
    string s, asc="12345678", desc="87654321";

    for(int i=0;i<8;i++){
        cin>>in;
        s+=in;
    }

    if(s == asc) cout<<"ascending";
    else if(s == desc) cout<<"descending";
    else cout<<"mixed";


    return 0;
}   