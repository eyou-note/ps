#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  

    string s; cin>>s;
    int i=0, j=s.size()-1;
    bool is_palindrome = true;

    while(i<=j){
        if(s[i++] != s[j--]){
            is_palindrome = false;
            break;
        }
    }
    
    cout<<(is_palindrome?"true":"false");

    return 0;
}