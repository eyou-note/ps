#include <bits/stdc++.h>


using namespace std;

int a[8];
bool visited[8];
set<int> res;

bool is_prime_number(int n){
	if(n == 1||n==0) return false;
	int end = (int) sqrt(n);
	for(int i=2;i<=end;i++){
		if(n%i==0) return false;
	}
	return true;
}

void DFS(int cnt, int size, string num){
	if(cnt == size){
		string result;
		for(int i=0;i<cnt;i++){
			result.push_back(num[a[i]]);
		}
		res.insert(stoi(result));

		return ;
	}

	for(int i=0;i<num.size();i++){
		if(!visited[i]){
			visited[i] = true;
			a[cnt] = i;
			DFS(cnt+1, size, num);
			visited[i] = false;
		}
	}
}

int solution(string num) {
	int ans =0;
	for(int i=1;i<=num.size();i++)
		DFS(0, i, num);
	for(auto n : res){
		if(is_prime_number(n)){
			ans+=1;
		}	
	}
    return ans;
}

