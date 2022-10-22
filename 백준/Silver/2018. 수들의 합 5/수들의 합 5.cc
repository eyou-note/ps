#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

//이해 안감
int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);

    int n,sum=0,cnt=0; cin>>n;
   

   	for(int i=1;sum<=n;i++){
		sum +=i;
		if((n-sum)>=0 && (n-sum)%i==0) cnt++;
	}

    cout<<cnt;

    return 0;
}
