#include <bits/stdc++.h>

#define endl '\n'
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

	int n,i,j,k; cin>>n;

	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			cout<<" ";
		}
		for(k=j;k<(2*n)-1-j;k++){
			cout<<"*";
		}
		cout<<endl;	
	}
    
    return 0;
}
