#include <bits/stdc++.h>

#define endl '\n'
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

	int n,in,cnt=0; 
	cin>>n;

	for(int i=0;i<5;i++){
		cin>>in;

		if(in%10 == n)
			cnt+=1;
	}
	
	cout<<cnt;

    return 0;
}
