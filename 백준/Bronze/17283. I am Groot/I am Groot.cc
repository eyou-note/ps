#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   //	freopen("input.txt", "r", stdin);
   	
   	int L,R,sum=0,node=2; cin>>L>>R;
   	
   	while(1){
   		L = L * ((double)R/100);
   		if(L<=5) break;
   		sum += L * node;
   		node*=2;
	}
	
	cout<<sum;
  
    return 0;
}