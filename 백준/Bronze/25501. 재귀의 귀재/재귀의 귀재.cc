#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int cnt;
int recursion(string &s, int l, int r){
    cnt+=1;
    if(l>=r) return 1; //여기까지 왔으면 팰린드롬이라 판단.
    else if(s[l]!=s[r]) return 0;
    else  return recursion(s, l+1, r-1);
}

int isPalindrome(string &s){
    return recursion(s, 0, s.size()-1);
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int t; cin>>t;
    string s;
    while(t--){
        cin>>s;
        cnt=0;
        int result = isPalindrome(s);
        cout<<result<<' '<<cnt<<'\n';
    }

    return 0;
}

