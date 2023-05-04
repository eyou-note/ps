#include <bits/stdc++.h>

#define endl '\n'
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int room[7][2];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

	int n,k,gender,grade,cnt=0;
	cin>>n>>k;

	for(int i=0;i<n;i++){
		cin>>gender>>grade;
		room[grade][gender] += 1;
	}


	for(int i=1;i<=6;i++){
		for(int j=0;j<2;j++){
			if(room[i][j] !=0 ){
				cnt += room[i][j]/k;
				if(room[i][j] % k != 0)
					cnt+=1;
			}
		}
	}

	cout<<cnt;


    return 0;
}
