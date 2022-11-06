#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n, res = 0;
    string s;
	cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i] == '1') res+=1;
    }
    
	cout << res ;

    return 0;

}
