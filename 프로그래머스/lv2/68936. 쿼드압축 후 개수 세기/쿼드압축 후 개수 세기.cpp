#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> arr) {
    vector<int> ans(2,0);
	int size = arr.size();
	for(int k=size;k!=0;k/=2){
		int ZERO = 0, ONE = k*k;


		for(int m=0;m<size;m+=k){
			for(int n=0;n<size;n+=k){
				
				int sum = 0;

				for(int i=m;i<m+k;i++){
					for(int j=n;j<n+k;j++){
						sum+=arr[i][j];
					}
				}
				if(sum == ZERO || sum == ONE){
					for(int i=m;i<m+k;i++){
						for(int j=n;j<n+k;j++){
							arr[i][j]=-1;
						}
					}
					ans[sum==ZERO ? 0 : 1]+=1;
				} 
			}	
		}
	}
    return ans;
}
