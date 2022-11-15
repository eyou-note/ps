#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n; 
    string s1,s2;
    cin>>n>>s1>>s2;

    if(n%2==0){
        cout<<(s1==s2?"Deletion succeeded":"Deletion failed");
    }else{
        string rev;
        for(int i=0;i<s1.size();i++){
            rev.push_back( s1[i]=='0'?'1':'0');
        }
        cout<<(s2==rev?"Deletion succeeded":"Deletion failed");
    }
    return 0;
}