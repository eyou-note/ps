#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
	pair<int,int> cur;
	int h  = park.size(), w = park[0].size();
	for(int i=0;i<h;i++) { 
		for(int j=0;j<w;j++){
			if(park[i][j] == 'S')
				cur = {i,j};
		}
	}

	for(auto r : routes){	
		char d = r[0];
		int n = r[2]-'0';

		int nx  = cur.first, ny = cur.second;
		int valid = 1;
		if(d == 'N' || d == 'S'){
			int add = (d == 'S')  ?  1 : -1;
			
			for(int i=0;i<n;i++){
				nx += add;
				if(nx<0 || nx >=h || park[nx][ny] == 'X') {
					valid = 0;
					break;
				}
			}

		}else{
			int add = (d == 'E')  ?  1 : -1;
			
			for(int i=0;i<n;i++){
				ny += add;
				if(ny<0 || ny >=w || park[nx][ny] == 'X') {
					valid = 0;
					break;
				}
			}

		}

		if( valid ) 
			cur = {nx,ny};
	}

    return {cur.first, cur.second};
}
