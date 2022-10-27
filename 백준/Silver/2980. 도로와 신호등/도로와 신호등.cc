#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

typedef struct _Light{
    int pos;
    int red;
    int green;
} Light;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin); 

    int N,L,D,R,G,time=0,idx=0;
    cin>>N>>L;

    vector<Light> lights(N);
    for(int i=0;i<N;i++){
        cin>>D>>R>>G;
        lights[i] = {D,R,G};
    }

    for(int i=1;i<L;i++){
        if(i == lights[idx].pos){
            int r = time%(lights[idx].red + lights[idx].green);
            if(r < lights[idx].red){
                time += lights[idx].red -r+1;
            }else{
                time += 1;
            }
            idx+=1;
        }else{
            time+=1;
        }
    }

    cout<<time;


    
    return 0;
}
