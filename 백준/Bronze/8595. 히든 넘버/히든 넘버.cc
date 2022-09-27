#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  
    
	int n;
	long long sum=0, res=0;
    string s;
    cin>>n>>s;

    for(int i=0;i<s.size();i++){

        if(s[i]>='0'&&s[i]<='9'){
            sum = sum*10+(s[i]-'0'); // 0*10 + 1, 1*10+3
        }else{
            res+=sum;
			sum=0;
        }
    }
    res+=sum; 
    cout<<res;

    return 0;
}