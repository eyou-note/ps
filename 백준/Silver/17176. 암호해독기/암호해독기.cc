#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int chk[53];
int main(){
    fastio;
   	//freopen("input.txt", "r", stdin);
   	
   	int n,in,yes=1; cin>>n;
	string s;
	   	
   	for(int i=0;i<n;i++){
   		cin>>in;
   		chk[in] += 1;
	}

	cin.ignore();
	
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		int idx;
		
		if(s[i] == ' '){
			idx = 0;
		}else if(s[i]>='A' && s[i]<='Z'){
			idx = s[i]-'A'+1;
		}else{
			idx = s[i]-'a'+27;
		}
		
		if(chk[idx] <= 0){
			yes=0;
			break;
		}
		chk[idx] -= 1;
	}
	
	cout<<(yes?'y':'n');
	
    return 0;
}