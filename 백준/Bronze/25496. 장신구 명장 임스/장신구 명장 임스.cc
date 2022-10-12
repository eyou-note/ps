#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   	//freopen("input.txt", "r", stdin);
   	
   	int p,n,cnt=0,pos=0; cin>>p>>n;
   	vector<int> a(n);
   	
   	for(int i=0;i<n;i++){
   		cin>>a[i];
	}
	
	sort(a.begin(), a.end());
	
	while(p<200&&cnt<n){
		cnt+=1;
		p+=a[pos++];
	}
	
	cout<<cnt;

    return 0;
}