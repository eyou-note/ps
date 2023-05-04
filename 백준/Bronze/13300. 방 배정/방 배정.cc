#include <bits/stdc++.h>

#define endl '\n'
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int room[7][2];
int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);

	int n,k,gender,grade,cnt=0;
	cin>>n>>k;

	for(int i=0;i<n;i++){
		cin>>gender>>grade;
		room[grade][gender] += 1;
	}

	for(int i=1;i<=6;i++){
		if(room[i][0] != 0)
			cnt += (room[i][0]/k == 0) ? 1 : ceil( (double)room[i][0]/k );

		if(room[i][1] != 0)
			cnt += (room[i][1]/k == 0) ? 1 : ceil( (double)room[i][1]/k );
	}

	cout<<cnt;


    return 0;
}
