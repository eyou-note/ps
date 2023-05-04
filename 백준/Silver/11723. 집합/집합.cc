#include <bits/stdc++.h>

#define endl '\n'
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

	int nums[21] = {0,};
	int t; cin>>t;


	string cmd;
	while(t--){
		cin>>cmd;

		if(cmd == "all"){
			for(int i=1;i<=20;i++) 
				nums[i] = 1;
		}else if (cmd=="empty"){
			for(int i=1;i<=20;i++) 
				nums[i] = 0;
		}else{
			int n;
			cin>>n;

			if(cmd == "add")
				nums[n] = 1;
			else if (cmd == "check"){
				cout<<(nums[n]?1:0)<<endl;
			}else if(cmd == "remove"){
				nums[n] = 0;
			}else if (cmd == "toggle"){
				nums[n] = nums[n] ? 0 : 1;
			}
		}
	}

    return 0;
}
