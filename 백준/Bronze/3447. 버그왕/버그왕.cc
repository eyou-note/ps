#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   	//freopen("input.txt", "r", stdin);
   	
   	string in,find_str="BUG";
   	
   	while(getline(cin,in)){
   		
   		//BUG를 찾고 다시 확인  
   		while(in.find(find_str) != string::npos){
			in.replace(in.find(find_str), find_str.size(), ""); 
		}
		cout<<in<<'\n';

	}
	
    return 0;
}